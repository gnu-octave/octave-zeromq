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

// PKG_ADD: autoload ("zmq_z85_decode", "zeromq.oct");
DEFUN_DLD (zmq_z85_decode, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {} {@var{data} =} zmq_z85_decode (@var{instr})\n \
\n\
Decode a z85 encoded string to a binary key.\n \
\n \
@var{instr} is a string encoded data\
\n \
@var{data} is uint8 decoded data\n \
\n \
\n \
@end deftypefn")
{
  octave_value retval;

  if (args.length () != 1)
    {
        print_usage ();
        return octave_value ();  
    }

  if(!args(0).is_string ())
    {
      error ("zeromq: expected input to be a string");
      return octave_value ();  
    }

  std::string in = args (0).string_value ();
  int len = in.length ();

  if (len % 5 != 0 || len == 0)
    {
      error ("zeromq: input string size must be divisible by 5");
      return octave_value ();  
    }

#ifdef ZMQ_CURVE

  len = (len/5)*4;
  OCTAVE_LOCAL_BUFFER (uint8_t, outbuf, len);


  if (!outbuf)
    {
      error ("zeromq: could allocate memory for decoding.\n");
      return octave_value ();  
    }
  else
    {
      uint8_t * out = zmq_z85_decode(outbuf, in.c_str());

      if (!out)
         {
           error ("zeromq: couldn't decode data");
           return octave_value ();  
         }

      uint8NDArray data( dim_vector (1,len) );
      for (int i=0; i<len; i++)
        data (i) = outbuf[i];

      retval = data;
    }
#else
  error ("zeromq: curve functions not implemented by this version of libzmq");
#endif
  return retval;
}
#if 0
%!error <Invalid call to zmq_z85_decode()> zmq_z85_decode()

%!error <Invalid call to zmq_z85_decode()> zmq_z85_decode("1234", 2)

%!error <zeromq: expected input to be a string> zmq_z85_decode(1)

%!error <zeromq: input string size must be divisible by 5> zmq_z85_decode("123")

%!assert (zmq_z85_decode("0rJua"), uint8([1 2 3 4]))

#endif
