// Copyright (C) 2019 John Donoghue <john.donoghue@ieee.org>
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
#include <octave/defun-dld.h>

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

// zeromq includes
#include <zmq.h>

// PKG_ADD: autoload ("zmq_z85_encode", "zeromq.oct");
DEFUN_DLD (zmq_z85_encode, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {} {@var{dest} =} zmq_z85_encode (@var{data})\n \
\n\
Encode a binary key as Z85 printable text.\n \
\n \
@subsubheading Inputs\n \
@var{data} - uint8 data that must have a size divisible by 4.\n \
\n \
@subsubheading Outputs\n \
@var{dest} - string encoded data\
\n \
@end deftypefn")
{
  octave_value retval;

  if (args.length () != 1)
    {
        print_usage ();
        return octave_value ();  
    }

  if(!args(0).is_uint8_type ())
    {
      error ("zeromq: expected input to be uint8 type data");
      return octave_value ();  
    }

  NDArray data = args (0).array_value ();

  if (data.numel() % 4 != 0 || data.numel() == 0)
    {
      error ("zeromq: input data size must be divisible by 4");
      return octave_value ();  
    }

#ifdef ZMQ_CURVE
  OCTAVE_LOCAL_BUFFER (uint8_t, inbuf, data.numel ());
  OCTAVE_LOCAL_BUFFER (char, outbuf, (data.numel () + (data.numel ()/4) + 1));

  if (!inbuf || !outbuf)
    error ("zeromq: could allocate memory for encoding.\n");
  else
    {
       for(int i=0; i<data.numel (); i++)
         inbuf[i] = data(i);

       char * out = zmq_z85_encode(outbuf, inbuf, data.numel());
       if (out)
         {
           retval = octave_value (std::string (out));
         }
       else
         {
           error ("zeromq: couldn't encode data");
         }
    }
#else
  error ("zeromq: curve functions not implemented by this version of libzmq");
#endif
  return retval;
}
#if 0
%!error <Invalid call to zmq_z85_encode()> zmq_z85_encode()

%!error <Invalid call to zmq_z85_encode()> zmq_z85_encode(1, 2)

%!error <zeromq: expected input to be uint8 type data> zmq_z85_encode(1)

%!error <zeromq: input data size must be divisible by 4> zmq_z85_encode(uint8([1 2 4]))

%!error <zeromq: expected input to be uint8 type data> zmq_z85_encode([1 2 3 4])

%!assert (zmq_z85_encode(uint8([1 2 3 4])), "0rJua")

#endif
