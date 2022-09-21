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

// PKG_ADD: autoload ("zmq_curve_public", "zeromq.oct");
DEFUN_DLD (zmq_curve_public, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {} {@var{publickey} =} zmq_curve_public (@var{privatekey})\n \
\n\
Derive the public key from a private key\n \
\n \
@var{privatekey} is a string that is the encoded private key. It must be 40 characters in length\n \
\n \
@var{publickey} is a string that is the encoded public key\n \
\n \
@seealso{zmq_curve_keypair}\n \
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

  if (len != 40)
    {
      error ("zeromq: input string key size must be 40");
      return octave_value ();  
    }

#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(4,2,0)
  char publickey[41];

  int rc = zmq_curve_public(publickey, in.c_str());
  if (rc != 0)
    {
      error ("zeromq: couldn't create public key");
    }
  else
    {
      retval = octave_value (std::string (publickey));
    }
#else
  error ("zeromq: curve_public function not implemented by this version of libzmq");
#endif
  return retval;
}
#if 0
%!error <Invalid call to zmq_curve_public()> zmq_curve_public()

%!error <zeromq: expected input to be a string> zmq_curve_public(1)

%!error <zeromq: input string key size must be 40> zmq_curve_public("12345")

%!test
%! if zmq_has ('curve')
%!  [pub, priv] = zmq_curve_keypair();
%!  assert(!isempty(pub))
%!  assert(!isempty(priv))
%!  check = zmq_curve_public(priv);
%!  assert(check, pub)
%! endif

#endif
