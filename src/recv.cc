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
#include <octave/Array.h>
#include <octave/defun-dld.h>

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

#include "socket_class.h"

// PKG_ADD: autoload ("zmq_recv", "zeromq.oct");
DEFUN_DLD (zmq_recv, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {Loadable Function} data =  zmq_recv (@var{sock}, @var{len}[, @var{flags}])\n \
\n\
Attempt to receive up to @var{len} bytes of data from  zeromq socket.\n \
\n \
@var{sock} - the socket to receive from.\n \
\n \
@var{len} - number of bytes to read.\n \
\n \
@var{flags} - optional flags to pass to recv\n \
\n \
The read data is returned as @var{data} in an uint8 array.  \
\n \
@seealso{zmq_socket}\n \
@end deftypefn")
{
  init_types ();

  if (args.length () < 2  
    || args (0).type_id () != octave_zeromq_socket::static_type_id () 
    || (!args (1).OV_ISINTEGER () && !args (1).OV_ISFLOAT ()))
    {
      print_usage ();
      return octave_value (-1);  
    }

  int len = args (1).int_value ();

  if (len <= 0)
    {
      error ("zeromq: unexpected zero or negative length");
      return octave_value (-1);  
    }

  int flags = 0;

  if (args.length () > 2)
    {
      if (args (2).OV_ISINTEGER () && !args(2).OV_ISFLOAT ())
        {
          print_usage ();
          return octave_value (-1);  
        }
      flags = args (2).int_value();
    }
  
  unsigned char* buf = new unsigned char[ len ];

  if (buf == 0)
    {
      error ("zeromq: error allocating bufferfor recv\n");
      return octave_value (-1);  
    }

  octave_zeromq_socket * sock = NULL;

  const octave_base_value& rep = args (0).get_rep ();

  sock = &((octave_zeromq_socket &)rep);

  int read = sock->recv (buf,len,flags);

  octave_value return_value;

  if (read >= 0)
    {
      uint8NDArray data( dim_vector (1,read) );
      for (int i=0;i<read;i++)
        data(i) = buf[i];

      return_value = data;

      delete [] buf;
    }
  else
    {
      return_value = uint8NDArray (dim_vector (1,0));
    }

  return return_value;
}

