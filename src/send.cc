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

#include <octave/defun-dld.h>

#include "socket_class.h"

// PKG_ADD: autoload ("zmq_send", "zeromq.oct");
DEFUN_DLD (zmq_send, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {Loadable Function} @var{count} =  zmq_send (@var{sock}, @var{data}[, @var{flags}])\n \
\n\
Attempt to send to @var{data} bytes of data to zeromq socket.\n \
\n \
@var{sock} - the socket to recieve from.\n \
\n \
@var{data} - data to send - either string or uint8 type.\n \
\n \
@var{flags} - optional flags to pass to send\n \
\n \
Returns @var{count} of bytes written to socket, or -1 on error.\n \
\n \
@seealso {zmq_socket}\n \
@end deftypefn")
{
  init_types ();

  if (args.length () < 2 
    || args(0).type_id () != octave_zeromq_socket::static_type_id ())
    {
      print_usage ();
      return octave_value (-1);  
    }

  int flags = 0;

  if (args.length () > 2)
    {
      if (args(2).is_integer_type () && !args(2).is_float_type ())
        {
          print_usage ();
          return octave_value (-1);  
        }
      flags = args(2).int_value();
    }
  
  octave_zeromq_socket * sock = NULL;

  const octave_base_value& rep = args (0).get_rep ();

  sock = &((octave_zeromq_socket &)rep);

  int retval = -1;

  if (args(1).is_string ())
  {
     retval = sock->send (args(1).string_value (), flags);
  }
  else if(args(1).is_uint8_type ())
  {
    NDArray data = args(1).array_value ();

    uint8_t * buf = new uint8_t[data.numel ()];

    if (!buf)
      error ("zeromq: could allocate memory for send message.\n");
    else
    {
       for(int i=0;i<data.numel ();i++)
         buf[i] = data(i);

       retval = sock->send (buf, data.numel (), flags);

       delete [] buf;
    }
  } 
  else
  {
     error ("zeromq: invalid data type. Must be a string or uin8 data");
  }

  return octave_value (retval);
}

