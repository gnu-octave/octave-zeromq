## Copyright (C) 2022 John Donoghue
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
## @deftypefn  {} {} ZMQ_RATE
##
## Constant for getsockopt and setsockopt value option
##
## Sets the data rate of multicast sockets in kilobits
##
## @seealso{zmq_getsockopt, zmq_setsockopt}
## @end deftypefn

function v = ZMQ_RATE ()
  v = __ZMQ_OPT_RATE;
endfunction

%!assert (ZMQ_RATE, __ZMQ_OPT_RATE)


