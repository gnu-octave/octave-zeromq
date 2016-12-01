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

#include "socket_class.h"

#include <zmq.h>

//#ifndef ZMQ_HWM

// PKG_ADD: autoload ("zmq_getsockopt", "zeromq.oct");
DEFUN_DLD (zmq_getsockopt, args, nargout,
        "-*- texinfo -*-\n\
@deftypefn {Loadable Function} @var{value} =  zmq_getsockopt (@var{sock}, @var{optionid})\n \
\n\
Get the current value of an option.\n \
\n \
@var{sock} - the socket to connect.\n \
\n \
@var{optionid} - the setsockopt option to set.\n \
\n \
@var{value} - the value set for the option, or [].\n \
\n \
Valid @var{optionid}s are:\n \
@table @asis\n \
@item @code{ZMQ_RCVMORE}\n \
Flag for whether a message has been split into multiple messages. The return vaue with be either 0 or 1.\n \
@item @code{ZMQ_TYPE}\n \
Socket type for zeromq socket created with zmq_socket.\n \
Valid types are the same as the socket type value specified with zmq_socket. \n \
@item @code{ZMQ_EVENTS}\n \
Get the event state of zeromq socket.\n \
The returned value is a bit mask that may contain the following set values:\n \
@itemize\n \
@item @code{ZMQ_POLLIN} set when at least one message available to read and zmq_recv will not block.\n \
@item @code{ZMQ_POLLOUT} set when at least one message can be written without zmq_send blocking.\n \
@end itemize\n \
@item @code{ZMQ_IDENTITY}\n \
Get the socket identity value\n \
@end table\n \
\n \
@seealso{zmq_socket}\n \
@end deftypefn")
{
  init_types ();


  if (args.length () != 2 || 
      args(0).type_id () != octave_zeromq_socket::static_type_id ())
    {
      print_usage ();
      return octave_value ();  
    }

  if (args(1).is_integer_type () && !args(1).is_float_type ())
    {
      print_usage ();
      return octave_value ();  
    }

  octave_zeromq_socket * sock = NULL;

  const octave_base_value& rep = args (0).get_rep ();

  sock = &((octave_zeromq_socket &)rep);

  int opt = args(1).int_value();

  std::string strvalue;

  octave_value ret;
  switch(opt)
  {
  case ZMQ_RCVMORE:
    {
#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)
      int64_t flag = 0;
#else
      int flag = 0;
#endif
      size_t sz = sizeof(flag);
      if (!sock->getsockopt(opt, &flag, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value(flag);
    }
    break;
#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)
 case ZMQ_HWM:
    {
      uint64_t value = 0;
      size_t sz = sizeof(value);
      if(!sock->getsockopt(opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value(value);
    }
    break;
#endif
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(3,0,0)
 case ZMQ_SNDHWM:
    {
      int value = 0;
      size_t sz = sizeof(value);
      if(!sock->getsockopt(opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value(value);
    }
    break;
#endif
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(3,0,0)
 case ZMQ_RCVHWM:
    {
      int value = 0;
      size_t sz = sizeof(value);
      if(!sock->getsockopt(opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value(value);
    }
    break;
#endif    
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(2,1,0)
 case ZMQ_TYPE:
    {
      ret = octave_value(sock->socktype());
    }
    break;    
#endif
  case ZMQ_EVENTS:
    {
#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)
      uint32_t value = 0;
#else
      int value = 0;
#endif
      size_t sz = sizeof(value);
      if(!sock->getsockopt(opt, &value, &sz))
        error ("zeromq: ZMQ_EVENTS failed getsockopt");

      ret = octave_value(value);
    }
    break;
 case ZMQ_IDENTITY:
    {
      uint8_t value[256];
      size_t sz = sizeof(value);

      if(!sock->getsockopt(opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          uint8NDArray data( dim_vector (1,sz) );
          for (size_t i=0;i<sz;i++)
            {
              data(i) = value[i];
            }

          ret = data;
        }
      else
        ret = uint8NDArray (dim_vector (1,0));
    }
    break;

  default:
    error ("zeromq: invalid getsockopt value %d", opt);
    break;
  } 

  return ret;
}

