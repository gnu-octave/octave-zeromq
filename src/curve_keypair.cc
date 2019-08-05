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

// PKG_ADD: autoload ("zmq_curve_keypair", "zeromq.oct");
DEFUN_DLD (zmq_curve_keypair, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {Loadable Function} [ @var{publickey}, @var{privatekey} ]  =  zmq_curve_keypair ()\n \
\n\
Generate a random private/public keypair\n \
\n \
@var{publickey} is a string that is the encoded public key\n \
\n \
@var{privatekey} is a string that is the encoded private key\n \
\n \
@seealso { zmq_z85_encode }\n \
@end deftypefn")
{
  octave_value_list retval;

  if (args.length () != 0)
    {
        print_usage ();
        return retval;
    }

#ifdef ZMQ_CURVE
  char privatekey[41];
  char publickey[41];

  int rc = zmq_curve_keypair(publickey, privatekey);
  if (rc != 0)
    {
      error ("zeromq: couldn't encode data");
      return retval;
    }

  retval(0) = octave_value (std::string (publickey));
  retval(1) = octave_value (std::string (privatekey));
#else
  error ("zeromq: curve functions not implemented by this version of libzmq");
#endif
  return retval;
}
#if 0
%!error <Invalid call to zmq_curve_keypair()> zmq_curve_keypair(1)

%!test
%! [pub, priv] = zmq_curve_keypair();
%! assert(!isempty(pub))
%! assert(!isempty(priv))

#endif
