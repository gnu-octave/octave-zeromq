## Copyright (C) 2016 John Donoghue
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
## @deftypefn  {Command} {} ZMQ_PAIR
##
## Constant for pair socket type.
##
## @seealso{zmq_socket}
## @end deftypefn

function v = ZMQ_PAIR ()
  v = ZMQ_SOCK_PAIR;
endfunction

%!assert (ZMQ_PAIR, ZMQ_SOCK_PAIR)


