// Copyright (C) 2016-2018 John Donoghue <john.donoghue@ieee.org>
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

#include "socket_class.h"

// PKG_ADD: autoload ("zmq_unbind", "zeromq.oct");
DEFUN_DLD (zmq_unbind, args, nargout,
        "-*- texinfo -*-\n\
@deftypefn {} {@var{status} =} zmq_unbind (@var{sock}, @var{endpoint})\n \
\n\
Unbind a previously bound zeromq socket from a endpoint.\n \
\n \
@subsubheading Inputs\n \
@var{sock} - the socket to unbind.\n \
\n \
@var{endpoint} - the endpoint string to unbind.\n \
\n \
@subsubheading Outputs\n \
@var{status} - status for unbind.\n \
On success, unbind will return a @var{status} of true \n \
\n \
@seealso { zmq_socket, zmq_bind }\n \
@end deftypefn")
{
  init_types ();

  if (args.length () != 2 
    ||  args (0).type_id () != octave_zeromq_socket::static_type_id ()
    || ! args (1).is_string ())
    {
      print_usage ();
      return octave_value (false);  
    }

  octave_zeromq_socket * sock = NULL;

  const octave_base_value& rep = args (0).get_rep ();

  sock = &((octave_zeromq_socket &)rep);

  bool ret = sock->unbind (args (1).string_value ());

  return octave_value (ret);
}
#if 0
%!error <Invalid call to zmq_unbind> zmq_unbind()

%!error <Invalid call to zmq_unbind> zmq_unbind(1)

%!test
%! s = zmq_socket("ZMQ_PUB");
%! zmq_bind(s, "tcp://127.0.0.1:10000");
%! zmq_unbind(s, "tcp://127.0.0.1:10000");
%! zmq_close(s);

#endif
