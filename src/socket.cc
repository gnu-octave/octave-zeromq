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

// PKG_ADD: autoload ("zmq_socket", "zeromq.oct");
DEFUN_DLD (zmq_socket, args, nargout,
        "-*- texinfo -*-\n\
@deftypefn {} {@var{sock} =} zmq_socket (@var{type})\n \
\n\
Create a zeromq socket.\n \
\n \
@subsubheading Inputs\n \
@var{type} - the socket type to create.\n \
\n \
Supported socket types are:\n \
@table @asis\n \
@item  @code{ZMQ_PUB} \n \
Publish socket\n \
@item  @code{ZMQ_SUB} \n \
Subscribe socket\n \
@item  @code{ZMQ_REQ} \n \
Request socket\n \
@item  @code{ZMQ_REP} \n \
Reply socket\n \
@item  @code{ZMQ_PULL} \n \
Pull socket\n \
@item  @code{ZMQ_PUSH} \n \
Push socket\n \
@item  @code{ZMQ_PAIR} \n \
Pair socket\n \
@item  @code{ZMQ_DEALER}\n \
Dealer socket\n \
@item  @code{ZMQ_ROUTER}\n \
Router socket\n \
@item  @code{ZMQ_XPUB} \n \
Publish socket\n \
@item  @code{ZMQ_XSUB} \n \
Subscribe socket\n \
@item  @code{ZMQ_STREAM} \n \
Stream socket\n \
@end table\n \
\n \
@subsubheading Outputs\n \
@var{sock} - an instance of @var{octave_zeromq_socket} class.\n \
\n \
@seealso {ZMQ_PUB, ZMQ_SUB, ZMQ_PUSH, ZMQ_PULL, ZMQ_REQ, ZMQ_REP, ZMQ_PAIR, ZMQ_DEALER, ZMQ_ROUTER, ZMQ_XPUB, ZMQ_XSUB, ZMQ_STREAM}\n \
@end deftypefn")
{
  if (nargout != 1)
   {
     print_usage ();
     return octave_value ();
   }

  int socktype = ZMQ_PUB;

  if (args.length () > 0)
    {
      if (args (0).OV_ISINTEGER () || args (0).OV_ISFLOAT ())
        {
          socktype = args (0).int_value ();
        }
      else if (args (0).is_string ())
        {
          socktype = octave_zeromq_socket::gettypeval(args (0).string_value ());
        }
      else
        {
          print_usage ();
          return octave_value ();  
        }
    }

  init_types ();

  octave_zeromq_socket * retvalue = new octave_zeromq_socket ();

  if ( retvalue->create (socktype) == false )
    {
      delete retvalue;
      return octave_value ();
    }

  return octave_value (retvalue);
}

#if 0
%!error <Invalid call to zmq_socket> zmq_socket()

%!test
%! s = zmq_socket();
%! assert(!isempty(s))
%! zmq_close(s);

%!test
%! s = zmq_socket(ZMQ_SUB);
%! assert(!isempty(s))
%! zmq_close(s);

%!test
%! s = zmq_socket(ZMQ_SUB);
%! assert(isa(s, 'octave_zeromq_socket'))
%! zmq_close(s);

%!test
%! s = zmq_socket("ZMQ_SUB");
%! assert(!isempty(s))
%! zmq_close(s);

%!error <unknown socktype> a = zmq_socket("invalid");

#endif
