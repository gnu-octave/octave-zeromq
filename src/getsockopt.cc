// Copyright (C) 2016-2020 John Donoghue <john.donoghue@ieee.org>
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

#include <zmq.h>

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
Flag for whether a message has been split into multiple messages. The return value will be either 0 or 1.\n \
@item @code{ZMQ_TYPE}\n \
Socket type for zeromq socket created with zmq_socket.\n \
Valid types are the same as the socket type value specified with zmq_socket. \n \
@item @code{ZMQ_EVENTS}\n \
Get the event state of zeromq socket.\n \
The returned value is a bit mask that may contain the following set values:\n \
@itemize\n \
@item @code{ZMQ_POLLIN} set when at least one message is available to read and zmq_recv will not block.\n \
@item @code{ZMQ_POLLOUT} set when at least one message can be written without zmq_send blocking.\n \
@end itemize\n \
@item @code{ZMQ_IDENTITY} or @code{ZMQ_ROUTING_ID}\n \
Get the socket identity value\n \
@item @code{ZMQ_RATE}\n \
Get the multicast data rate\n \
@item @code{ZMQ_PRIORITY}\n \
Get socket priority (linux only)\n \
@item @code{ZMQ_LAST_ENDPOINT}\n \
Get the last endpoint the socket was connected to\n \
@item @code{ZMQ_CONNECT_TIMEOUT}\n \
Get the connect timeout value\n \
@item @code{ZMQ_SOCKS_PROXY}\n \
Get the SOCKS5 proxy value (string)\n \
@item @code{ZMQ_CURVE_SERVER}\n \
Get whether socket is a curve server (1) or not (0)\n \
@item @code{ZMQ_CURVE_PRIVATEKEY}\n \
Get a the curve socket private key (string)\n \
@item @code{ZMQ_CURVE_PUBLICKEY}\n \
Get a the curve socket public key (string)\n \
@item @code{ZMQ_CURVE_SERVERKEY}\n \
Get a the curve socket public key (string)\n \
@item @code{ZMQ_PLAIN_SERVER}\n \
Get whether socket server will use plain authentication (1) or not (0)\n \
@item @code{ZMQ_PLAIN_USERNAME}\n \
Get the plain socket username (string)\n \
@item @code{ZMQ_PLAIN_PASSWORD}\n \
Get the plain socket password (string)\n \
@item @code{ZMQ_GSSAPI_SERVER}\n \
Get whether socket server will use gssapi authentication (1) or not (0)\n \
@item @code{ZMQ_GSSAPI_PLAINTEXT}\n \
Get whether socket will encrypt gssapi authentication (1) or not (0)\n \
@item @code{ZMQ_GSSAPI_PRINCIPAL}\n \
Get the name of the gssapi principal (string)\n \
@item @code{ZMQ_GSSAPI_SERVICE_PRINCIPAL}\n \
Get the name of the gssapi service principal (string)\n \
@item @code{ZMQ_MECHANISM}\n \
Get the security mechanism (ZMQ_NULL, ZMQ_PLAIN, ZMQ_CURVE, ZMQ_GSSAPI)\n \
@end table\n \
\n \
@seealso{zmq_socket, zmq_setsockopt}\n \
@end deftypefn")
{
  init_types ();


  if (args.length () != 2 || 
      args(0).type_id () != octave_zeromq_socket::static_type_id ())
    {
      print_usage ();
      return octave_value ();  
    }

  if (args (1).OV_ISINTEGER () && !args (1).OV_ISFLOAT ())
    {
      print_usage ();
      return octave_value ();  
    }

  octave_zeromq_socket * sock = NULL;

  const octave_base_value& rep = args (0).get_rep ();

  sock = &((octave_zeromq_socket &)rep);

  int opt = args (1).int_value ();

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
      size_t sz = sizeof (flag);
      if (! sock->getsockopt (opt, &flag, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (flag);
    }
    break;
#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)
 case ZMQ_HWM:
    {
      uint64_t value = 0;
      size_t sz = sizeof (value);
      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(3,0,0)
 case ZMQ_SNDHWM:
    {
      int value = 0;
      size_t sz = sizeof (value);
      if ( !sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(3,0,0)
 case ZMQ_RCVHWM:
    {
      int value = 0;
      size_t sz = sizeof (value);
      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif    
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(2,1,0)
 case ZMQ_TYPE:
    {
      ret = octave_value (sock->socktype ());
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
      size_t sz = sizeof (value);
      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: ZMQ_EVENTS failed getsockopt");

      ret = octave_value (value);
    }
    break;
#ifdef ZMQ_ROUTING_ID
 case ZMQ_ROUTING_ID:
#else
 case ZMQ_IDENTITY:
#endif
    {
      uint8_t value[256];
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, value, &sz))
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

#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(3,2,0)
  case ZMQ_LAST_ENDPOINT:
    {
      char value[1024];
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(4,2,0)
  case ZMQ_CONNECT_TIMEOUT:
    {
      int value;
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif
#ifdef ZMQ_SOCKS_PROXY
  case ZMQ_SOCKS_PROXY:
    {
      char value[1024];
      size_t sz = sizeof(value);

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif
#ifdef ZMQ_CURVE_SERVER
  case ZMQ_CURVE_SERVER:
    {
      int value;
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif 

#ifdef ZMQ_CURVE_PUBLICKEY
  case ZMQ_CURVE_PUBLICKEY:
    {
      char value[1024];
      size_t sz = 41;

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif
#ifdef ZMQ_CURVE_SERVERKEY
  case ZMQ_CURVE_SERVERKEY:
    {
      char value[1024];
      size_t sz = 41;

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif
#ifdef ZMQ_CURVE_SECRETKEY
  case ZMQ_CURVE_SECRETKEY:
    {
      char value[1024];
      size_t sz = 41;

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif
#ifdef ZMQ_PLAIN_SERVER
  case ZMQ_PLAIN_SERVER:
    {
      int value;
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif 

#ifdef ZMQ_PLAIN_USERNAME
  case ZMQ_PLAIN_USERNAME:
    {
      char value[1024];
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif
#ifdef ZMQ_PLAIN_PASSWORD
  case ZMQ_PLAIN_PASSWORD:
    {
      char value[1024];
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif
#ifdef ZMQ_GSSAPI_SERVER
  case ZMQ_GSSAPI_SERVER:
    {
      int value;
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif 

#ifdef ZMQ_GSSAPI_PLAINTEXT
  case ZMQ_GSSAPI_PLAINTEXT:
    {
      int value;
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif 
#ifdef ZMQ_GSSAPI_PRINCIPAL
  case ZMQ_GSSAPI_PRINCIPAL:
    {
      char value[1024];
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif

#ifdef ZMQ_GSSAPI_SERVICE_PRINCIPAL
  case ZMQ_GSSAPI_SERVICE_PRINCIPAL:
    {
      char value[1024];
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, value, &sz))
        error ("zeromq: failed getsockopt");

      if (sz > 0)
        {
          strvalue = std::string(value, sz-1);
        }
      else
        strvalue = "";

      ret = octave_value(strvalue);
    }
    break;
#endif

#ifdef ZMQ_MECHANISM
  case ZMQ_MECHANISM:
    {
      int value;
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif 
#ifdef ZMQ_PRIORITY
  case ZMQ_PRIORITY:
    {
      int value;
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif 
#ifdef ZMQ_RATE
  case ZMQ_RATE:
    {
      int value;
      size_t sz = sizeof (value);

      if (! sock->getsockopt (opt, &value, &sz))
        error ("zeromq: failed getsockopt");

      ret = octave_value (value);
    }
    break;
#endif 

  default:
    error ("zeromq: invalid getsockopt value %d", opt);
    break;
  } 

  return ret;
}

#if 0
%!error <Invalid call to zmq_getsockopt> zmq_getsockopt
%!error <Invalid call to zmq_getsockopt> zmq_getsockopt(10)

%!test
%! s = zmq_socket(ZMQ_SUB);
%! assert(zmq_getsockopt(s, ZMQ_TYPE), ZMQ_SUB);
%! zmq_setsockopt(s, ZMQ_IDENTITY, uint8([104 101 108 108 111]));
%! assert(zmq_getsockopt(s, ZMQ_IDENTITY), uint8([104 101 108 108 111]));
%! zmq_close(s);

#endif
