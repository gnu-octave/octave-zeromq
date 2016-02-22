// Copyright (C) 2016 John Donoghue <john.donoghue@ieee.org>
//
// This program is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation; either version 3 of the License, or (at your option) any later
// version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// this program; if not, see <http://www.gnu.org/licenses/>.

// Octave Includes
#include <octave/oct.h>
#include <octave/parse.h>
#include <octave/toplev.h>
#include <octave/cmd-hist.h>
#include <octave/symtab.h>
#include <octave/variables.h>
#include <octave/Array.h>
#include <octave/Cell.h>
#include <octave/defun-dld.h>

#include "socket_class.h"

// zeromq includes
#include <zmq.h>

#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)
#define TIMESCALE 1000
#else
#define TIMESCALE 1
#endif

// PKG_ADD: autoload ("zmq_poll", "zeromq.oct");
DEFUN_DLD (zmq_poll, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {Loadable Function} @var{havedata} =  zmq_poll (@var{sock}, @var{timeout})\n \
@deftypefnx {Loadable Function} @var{indexlist} =  zmq_poll (@var{socklist}, @var{timeout})\n \
\n\
Wait up to timeout time for recieved data on socket.\n \
\n \
@var{sock} - the socket to wait on.\n \
\n \
@var{socklist} - the array of sockets to wait on.\n \
\n \
@var{timeout} - timeout time in milliseconds.\n \
A value of 0 will return wtout waiting. A value of -1 will wait until there is data.\n \
\n \
@var{havedata} - value of 1 if have data.\n \
\n \
@var{indexlist} - cell array of indexes to sockets that have data.\n \
\n \
@seealso {zmq_socket}\n \
\n \
@end deftypefn")
{
  if (args.length () < 2)
    {
      print_usage ();
      return octave_value ();  
    }

  if(!args (1).is_integer_type () && !args (1).is_float_type ())
    {
      error ("zeromq: expected time as integer or float type");
    }

  int time = args (1).int_value ();

  if (time < -1)
    {
      error ("zeromq: unexpected negative time");
    }

  octave_value_list return_list;

  int sockcount = 0;
  if(args (0).type_id () == octave_zeromq_socket::static_type_id ())
    {
      sockcount = 1;
    }
  else if(args (0).is_cell ())
    {
      sockcount = args (0).cell_value ().numel ();
    }
  else
    {
      error ("zeromq: expected  argument of octave_zeromq_socket or array of octave_zeromq_socket");
    }

  zmq_pollitem_t pitem[sockcount];

  if(args (0).type_id () == octave_zeromq_socket::static_type_id ())
    {
	octave_zeromq_socket * sock = NULL;

	sock = dynamic_cast<octave_zeromq_socket*>(args (0).internal_rep ());

        pitem[0].socket = sock->socket ();
        pitem[0].events = ZMQ_POLLIN;
        pitem[0].fd = 0;  
    }
  else
    {
      int usedcount = 0;
      octave_zeromq_socket * sock = NULL;

      Cell cell = args (0).cell_value ();

      for(int i=0;i<sockcount;i++)
      {
        if(cell(i).type_id () == octave_zeromq_socket::static_type_id ())
	  {
	    sock = dynamic_cast<octave_zeromq_socket*>(cell (i).internal_rep ());
            pitem[usedcount].socket = sock->socket ();
            pitem[usedcount].events = ZMQ_POLLIN;
            pitem[usedcount].fd = 0;  
	    ++ usedcount;
	  }
      }
      sockcount = usedcount;
    }

  if (sockcount == 0)
    {
      error ("zeromq: expected  argument of octave_zeromq_socket or array of octave_zeromq_socket");
    }

  int have_data = 0;
  int waittime;
  do
  {
    if(time > 1000 || time == -1)
      waittime = 1000;
    else
      waittime = time;

    have_data = zmq_poll (pitem, sockcount, waittime*TIMESCALE);

    if(waittime != -1) time -= waittime;

    OCTAVE_QUIT;
  }
  while (have_data == 0 && time > 0);

  if(have_data > 0)
    {
      if(args (0).type_id () == octave_zeromq_socket::static_type_id ())
        {
          return_list (0) = 1;
	}
      else
        {
          Cell cells (dim_vector (1, have_data));
          int cell_pos = 0;
          for (int i=0;i<sockcount;i++)
            {
	      if ((pitem[i].revents & ZMQ_POLLIN) && (cell_pos < have_data))
	        {
	          cells (cell_pos) = (i+1);
	          ++ cell_pos;
	        }
	    }
          return_list (0) = cells;
	}
    }
  else
    {
      if(args (0).type_id () == octave_zeromq_socket::static_type_id ())
        {
          return_list (0) = octave_value(0);
	}
      else
        {
          return_list (0) = Cell (dim_vector (0,0));
	}
    }

  return return_list;
}

