// Copyright (C) 2018 John Donoghue <john.donoghue@ieee.org>
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

// PKG_ADD: autoload ("zmq_has", "zeromq.oct");
DEFUN_DLD (zmq_has, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {Loadable Function} {@var{yesno} =} zmq_has (@var{feature})\n \
\n\
Check if the zmq library supports a given feature.\n \
\n \
@var{feature} is the name of feature to check.\n \
\n \
Currently known features are:\n \
@table @asis\n \
@item 'ipc'\n \
library supports the ipc:// protocol\n \
@item 'pgm'\n \
library supports the pgm:// protocol\n \
@item 'tipc'\n \
library supports the tipc:// protocol\n \
@item 'norm'\n \
library supports the norm:// protocol\n \
@item 'curv'\n \
library supports the CURVE security mechanism\n \
@item 'gssapi'\n \
library supports the GSSAPI security mechanism\n \
@item 'draft'\n \
library was built with the draft api\n \
@end table\n \
\n \
Returns the @var{yesno}, set to true if the feature is available, otherwise false. \
\n \
@end deftypefn")
{
  if (args.length () != 1 ||
      ! args(0).is_string ())
    {
        print_usage ();
        return octave_value (-1);
    }

  // get feature to check in lower case
  std::string feature = args (0).string_value ();
  std::transform (feature.begin (), feature.end (), feature.begin (), ::tolower);

  octave_value yesno;

#if defined(ZMQ_HAS_CAPABILITIES)
  int has = zmq_has (feature.c_str ());
  if (has == 1) yesno = true;
  else  yesno = false;
#else
  // assuming if dont have caps, that we dont have the feature
  yesno = false;
#endif
  return yesno;
}

#if 0
%!test
%! ipc = zmq_has ("ipc");
%! assert (~isempty (ipc));

%!error <Invalid call to zmq_has> zmq_has()

%!error <Invalid call to zmq_has> zmq_has(1)

%!error <Invalid call to zmq_has> zmq_has("ipc", "ipc")
#endif
