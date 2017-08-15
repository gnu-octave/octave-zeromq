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
#include <octave/defun-dld.h>

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

#include "socket_class.h"

// PKG_ADD: autoload ("zmq_close", "zeromq.oct");
DEFUN_DLD (zmq_close, args, nargout,
        "-*- texinfo -*-\n\
@deftypefn {Loadable Function} {} zmq_close (@var{sock})\n \
\n\
Close a zeromq socket.\n \
\n \
@var{sock} - the socket type to close.\n \
\n \
@seealso { zmq_socket }\n \
@end deftypefn")
{
  init_types();

  if (args.length () != 1 
    || args (0).type_id () != octave_zeromq_socket::static_type_id ())
    {
      print_usage ();
      return octave_value (-1);  
    }

  octave_zeromq_socket * sock = NULL;

  const octave_base_value& rep = args (0).get_rep ();

  sock = &((octave_zeromq_socket &)rep);

  sock->close ();

  return octave_value ();
}

#if 0
%!error <Invalid call to zmq_close> zmq_close()
%!error <Invalid call to zmq_close> zmq_close(10)
#endif

