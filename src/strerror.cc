// Copyright (C) 2014 John Donoghue <john.donoghue@ieee.org>
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
#include <octave/parse.h>
#include <octave/toplev.h>
#include <octave/cmd-hist.h>
#include <octave/symtab.h>
#include <octave/variables.h>
#include <octave/Array.h>

#include <octave/defun-dld.h>

// zeromq includes
#include <zmq.h>

// PKG_ADD: autoload ("zmq_strerror", "zeromq.oct");
DEFUN_DLD (zmq_strerror, args, nargout,
        "-*- texinfo -*-\n \
@deftypefn {Loadable Function} @var{errorstr} =  zmq_strerror ()\n \
\n\
Get the last error from zeromq.\n \
\n \
@var{errorstr} is a string representation of the last error \
\n \
@end deftypefn")
{
  if (args.length () > 0)
    {
        print_usage ();
        return octave_value (-1);  
    }

  std::string str = zmq_strerror (errno);
  
  return octave_value (str);
}

