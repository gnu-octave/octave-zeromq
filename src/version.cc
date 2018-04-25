// Copyright (C) 2014-2018 John Donoghue <john.donoghue@ieee.org>
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

// zeromq includes
#include <zmq.h>

// PKG_ADD: autoload ("zmq_version", "zeromq.oct");
DEFUN_DLD (zmq_version, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {Loadable Function} [@var{major}, @var{minor}, @var{patch}] =  \
 zmq_version ()\n \
\n\
Get the ZeroMQ library version.\n \
\n \
Returns the @var{major}, @var{minor} and @var{patch} level version of the ZeroMQ library. \
\n \
@end deftypefn")
{
  if (args.length () > 0)
    {
        print_usage ();
        return octave_value (-1);  
    }

  int major, minor, patch;
  zmq_version (&major, &minor, &patch);
  
  octave_value_list return_list;

  return_list (0) = major;
  return_list (1) = minor;
  return_list (2) = patch;

  return return_list;
}

#if 0
%!test
%! [a,b,c] = zmq_version ();
%! assert(~isempty(a));
%! assert(~isempty(b));
%! assert(~isempty(c));
#endif
