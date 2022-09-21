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
## @deftypefn  {} {} ZMQ_RCVMORE
##
## Constant for getsockopt RCVMORE value option
##
## @seealso{zmq_getsockopt}
## @end deftypefn

function v = ZMQ_RCVMORE ()
  v = __ZMQ_OPT_RCVMORE;
endfunction

%!assert (ZMQ_RCVMORE, __ZMQ_OPT_RCVMORE)


