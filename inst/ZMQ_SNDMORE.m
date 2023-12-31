## Copyright (C) 2016-2018 John Donoghue
##
## This file is part of Octave.
##
## Octave is free software; you can redistribute it and/or modify it
## under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 3 of the License, or (at
## your option) any later version.
##
## Octave is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
## General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with Octave; see the file COPYING.  If not, see
## <http://www.gnu.org/licenses/>.

## -*- texinfo -*-
## @deftypefn  {} {} ZMQ_SNDMORE
##
## Constant for send flag SNDMORE
##
## @seealso{zmq_send}
## @end deftypefn

function v = ZMQ_SNDMORE ()
  v = __ZMQ_FLAG_SNDMORE;
endfunction

%!assert (ZMQ_SNDMORE, __ZMQ_FLAG_SNDMORE)


