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

// zeromq includes
#include <zmq.h>

// PKG_ADD: autoload ("zmq_errno", "zeromq.oct");
DEFUN_DLD (zmq_errno, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {} @var{errornum} =  zmq_errno ()\n \
\n\
Get the value of errno from zeromq.\n \
\n \
@subsubheading Inputs\n \
None\n \
@subsubheading Outputs\n \
@var{errornum} is the errno value of the calling thread.\n \
\n \
@end deftypefn")
{
  if (args.length () > 0)
    {
        print_usage ();
        return octave_value (-1);  
    }

  int err = zmq_errno ();
  
  return octave_value (err);
}

