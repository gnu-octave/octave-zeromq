// Copyright (C) 2016-2018 John Donoghue <john.donoghue@ieee.org>
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

// PKG_ADD: autoload ("zmq_setsockopt", "zeromq.oct");
DEFUN_DLD (zmq_setsockopt, args, nargout,
        "-*- texinfo -*-\n\
@deftypefn {Loadable Function} status =  zmq_setsockopt (@var{sock}, @var{optionid}, @var{value})\n \
\n\
Set a socket option on a zeromq socket.\n \
\n \
@var{sock} - the socket to connect.\n \
\n\
@var{optionid} - the setsockopt option to set.\n \
\n\
@var{value} - the value to set.\n \
\n \
On success, setsockopt will return @var{status} of true \n \
\n \
Known valid @var{optionid}s are:\n \
@table @asis\n \
@item @code{ZMQ_SUBSCRIBE}\n \
Subscribe to incoming messages matching the value. The value is either a string or a uint8 array that must match the start of any incoming message\n \
@item @code{ZMQ_UNSUBSCRIBE}\n \
Unsubscribe from incoming messages\n \
@item @code{ZMQ_CONNECT_TIMEOUT}\n \
Set timeout for connect calls\n \
@item @code{ZMQ_IDENTITY}\n \
Set the identity of a socket (string or uint8 data)\n \
@item @code{ZMQ_CURVE_SERVER}\n \
Set whether socket is a curve server (1) or not (0)\n \
@item @code{ZMQ_CURVE_PRIVATEKEY}\n \
Set the curve socket private key (string)\n \
@item @code{ZMQ_CURVE_PUBLICKEY}\n \
Set the curve socket public key (string)\n \
@item @code{ZMQ_CURVE_SERVERKEY}\n \
Set the curve socket public key (string)\n \
@item @code{ZMQ_PLAIN_SERVER}\n \
Set whether socket server will use plain authenication (1) or not (0)\n \
@item @code{ZMQ_PLAIN_USERNAME}\n \
Set the plain socket username (string)\n \
@item @code{ZMQ_PLAIN_PASSWORD}\n \
Set the plain socket password (string)\n \
@item @code{ZMQ_GSSAPI_SERVER}\n \
Set whether socket server will use gssi authenication (1) or not (0)\n \
@item @code{ZMQ_GSSAPI_PLAINTEXT}\n \
Set whether socket will encrypt gssi authenication (1) or not (0)\n \
@item @code{ZMQ_GSSAPI_PRINCIPAL}\n \
Set the name of the gssiapi principal (string)\n \
@item @code{ZMQ_GSSAPI_SERVICE_PRINCIPAL}\n \
Set the name of the gssiapi service principal (string)\n \
@end table\n \
\n \
@seealso {zmq_getsockopt, ZMQ_SUBSCRIBE, ZMQ_UNSUBSCRIBE, ZMQ_CONNECT_TIMEOUT}\n \
@end deftypefn")
{
  init_types ();

  if (args.length () != 3 || 
      args (0).type_id () != octave_zeromq_socket::static_type_id ())
    {
      print_usage ();
      return octave_value (false);  
    }

  if (args (1).OV_ISINTEGER () && !args (1).OV_ISFLOAT ())
    {
      print_usage ();
      return octave_value (false);  
    }

  octave_zeromq_socket * sock = NULL;

  const octave_base_value& rep = args (0).get_rep ();

  sock = &((octave_zeromq_socket &)rep);

  int opt = args (1).int_value ();
  bool ret = false;

  std::string strvalue;
  uint8_t binvalue[256];
  size_t binsize;

  switch(opt)
  {
  case ZMQ_SUBSCRIBE:
    if( !args (2).is_string ())
      {
        error("zeromq: expected string for option value");
        return octave_value (false);
      }
    strvalue = args (2).string_value ();

    ret = sock->setsockopt (opt, strvalue.c_str (), strvalue.length ());
    
    break;
  case ZMQ_UNSUBSCRIBE:
    ret = sock->setsockopt (opt, 0,0);
    break;

#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(4,2,0)
  case ZMQ_CONNECT_TIMEOUT:
    if (args (2).OV_ISINTEGER () && !args (2).OV_ISFLOAT ())
      {
        error("zeromq: expected integer parameter");
        return octave_value (false);
      }
    else
      {
        int value = args (2).int_value ();
        ret = sock->setsockopt (opt, &value, sizeof(value));
      }
    break;
#endif

#ifdef ZMQ_CURVE_SERVER
  case ZMQ_CURVE_SERVER:
    if (args (2).OV_ISINTEGER () && !args (2).OV_ISFLOAT ())
      {
        error("zeromq: expected integer parameter");
        return octave_value (false);
      }
    else
      {
        int value = args (2).int_value ();
        ret = sock->setsockopt (opt, &value, sizeof(value));
      }
    break;
#endif
#ifdef ZMQ_CURVE_PUBLICKEY
  case ZMQ_CURVE_PUBLICKEY:
    if (args (2).is_string ())
      {
        strvalue = args (2).string_value ();
      }
    else
      {
        error("zeromq: expected string for option value");
        return octave_value (false);
      }

    ret = sock->setsockopt (opt, strvalue.c_str(), strvalue.length());
    break;
#endif
#ifdef ZMQ_CURVE_SECRETKEY
  case ZMQ_CURVE_SECRETKEY:
    if (args (2).is_string ())
      {
        strvalue = args (2).string_value ();
      }
    else
      {
        error("zeromq: expected string option value");
        return octave_value (false);
      }

    ret = sock->setsockopt (opt, strvalue.c_str(), strvalue.length());
    break;
#endif
#ifdef ZMQ_CURVE_SERVERKEY
  case ZMQ_CURVE_SERVERKEY:
    if (args (2).is_string ())
      {
        strvalue = args (2).string_value ();
      }
    else
      {
        error("zeromq: expected string option value");
        return octave_value (false);
      }

    ret = sock->setsockopt (opt, strvalue.c_str(), strvalue.length());
    break;
#endif

#ifdef ZMQ_PLAIN_SERVER
  case ZMQ_PLAIN_SERVER:
    if (args (2).OV_ISINTEGER () && !args (2).OV_ISFLOAT ())
      {
        error("zeromq: expected integer parameter");
        return octave_value (false);
      }
    else
      {
        int value = args (2).int_value ();
        ret = sock->setsockopt (opt, &value, sizeof(value));
      }
    break;
#endif
#ifdef ZMQ_PLAIN_USERNAME
  case ZMQ_PLAIN_USERNAME:
    if (args (2).is_string ())
      {
        strvalue = args (2).string_value ();
      }
    else
      {
        error("zeromq: expected string for option value");
        return octave_value (false);
      }

    ret = sock->setsockopt (opt, strvalue.c_str(), strvalue.length());
    break;
#endif
#ifdef ZMQ_PLAIN_PASSWORD
  case ZMQ_PLAIN_PASSWORD:
    if (args (2).is_string ())
      {
        strvalue = args (2).string_value ();
      }
    else
      {
        error("zeromq: expected string for option value");
        return octave_value (false);
      }

    ret = sock->setsockopt (opt, strvalue.c_str(), strvalue.length());
    break;
#endif
#ifdef ZMQ_GSSAPI_SERVER
  case ZMQ_GSSAPI_SERVER:
    if (args (2).OV_ISINTEGER () && !args (2).OV_ISFLOAT ())
      {
        error("zeromq: expected integer parameter");
        return octave_value (false);
      }
    else
      {
        int value = args (2).int_value ();
        ret = sock->setsockopt (opt, &value, sizeof(value));
      }
    break;
#endif
#ifdef ZMQ_GSSAPI_PLAINTEXT
  case ZMQ_GSSAPI_PLAINTEXT:
    if (args (2).OV_ISINTEGER () && !args (2).OV_ISFLOAT ())
      {
        error("zeromq: expected integer parameter");
        return octave_value (false);
      }
    else
      {
        int value = args (2).int_value ();
        ret = sock->setsockopt (opt, &value, sizeof(value));
      }
    break;
#endif
#ifdef ZMQ_GSSAPI_PRINCIPAL
  case ZMQ_GSSAPI_PRINCIPAL:
    if (args (2).is_string ())
      {
        strvalue = args (2).string_value ();
      }
    else
      {
        error("zeromq: expected string for option value");
        return octave_value (false);
      }

    ret = sock->setsockopt (opt, strvalue.c_str(), strvalue.length());
    break;
#endif
#ifdef ZMQ_GSSAPI_SERVICE_PRINCIPAL
  case ZMQ_GSSAPI_SERVICE_PRINCIPAL:
    if (args (2).is_string ())
      {
        strvalue = args (2).string_value ();
      }
    else
      {
        error("zeromq: expected string for option value");
        return octave_value (false);
      }

    ret = sock->setsockopt (opt, strvalue.c_str(), strvalue.length());
    break;
#endif

  case ZMQ_IDENTITY:
    if (args (2).is_string ())
      {
        strvalue = args (2).string_value ();
        binsize = strvalue.length ();

        if (binsize > 255) binsize = 255;

        for (size_t i=0; i<binsize; i++)
          {
            binvalue[i] = strvalue[i];
          }
      }
    else if (args(2).is_uint8_type ())
      { 
        NDArray data = args (2).array_value ();
        binsize = data.numel ();

        if (binsize > 255) binsize = 255;

        for (size_t i=0; i<binsize; i++)
          {
            binvalue[i] = data (i);
          }
      }
    else
      {
        error("zeromq: expected string or uint8 for option value");
        return octave_value (false);
      }

    ret = sock->setsockopt (opt, binvalue, binsize);
    
    break;
 
  default:
    error ("zeromq: invalid setsockopt value %d", opt);
    break;
  } 

  return octave_value (ret);
}

#if 0
%!error <Invalid call to zmq_setsockopt> zmq_setsockopt()

%!error <Invalid call to zmq_setsockopt> zmq_setsockopt(1)

// valid test of setsockopt in getsockopt
#endif

