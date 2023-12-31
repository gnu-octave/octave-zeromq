// Copyright (C) 2014-2022 John Donoghue <john.donoghue@ieee.org>
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

// socket types ......

// PKG_ADD: autoload ("__ZMQ_SOCK_PUB", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_PUB, args, nargout,"zeromq constant")
{
  return octave_value(ZMQ_PUB);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_SUB", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_SUB, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_SUB);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_REQ", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_REQ, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_REQ);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_REP", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_REP, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_REP);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_PUSH", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_PUSH, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_PUSH);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_PULL", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_PULL, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_PULL);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_DEALER", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_DEALER, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_DEALER);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_ROUTER", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_ROUTER, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_ROUTER);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_PAIR", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_PAIR, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_PAIR);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_STREAM", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_STREAM, args, nargout,"zeromq constant")
{
#if defined(ZMQ_STREAM) 
  return octave_value(ZMQ_STREAM);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_SOCK_XPUB", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_XPUB, args, nargout,"zeromq constant")
{
  return octave_value(ZMQ_XPUB);
}

// PKG_ADD: autoload ("__ZMQ_SOCK_XSUB", "zeromq.oct");
DEFUN_DLD (__ZMQ_SOCK_XSUB, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_XSUB);
}

// socket send/recv flags --------------------
// PKG_ADD: autoload ("__ZMQ_FLAG_SNDMORE", "zeromq.oct");
DEFUN_DLD (__ZMQ_FLAG_SNDMORE, args, nargout,"zeromq flag constant")
{
  return octave_value(ZMQ_SNDMORE);
}

// PKG_ADD: autoload ("__ZMQ_FLAG_DONTWAIT", "zeromq.oct");
DEFUN_DLD (__ZMQ_FLAG_DONTWAIT, args, nargout,"zeromq flag constant")
{
//  return octave_value(ZMQ_DONTWAIT);
  return octave_value(ZMQ_NOBLOCK);
}

// set/get socket options ----------------------------

// PKG_ADD: autoload ("__ZMQ_OPT_SUBSCRIBE", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_SUBSCRIBE, args, nargout,"zeromq option constant")
{
  return octave_value(ZMQ_SUBSCRIBE);
}

// PKG_ADD: autoload ("__ZMQ_OPT_UNSUBSCRIBE", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_UNSUBSCRIBE, args, nargout,"zeromq option constant")
{
  return octave_value(ZMQ_UNSUBSCRIBE);
}

// PKG_ADD: autoload ("__ZMQ_OPT_RCVMORE", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_RCVMORE, args, nargout,"zeromq option constant")
{
  return octave_value(ZMQ_RCVMORE);
}

// PKG_ADD: autoload ("__ZMQ_OPT_IDENTITY", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_IDENTITY, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_IDENTITY
  return octave_value(ZMQ_IDENTITY);
#else
  return octave_value(ZMQ_ROUTING_ID);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_ROUTING_ID", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_ROUTING_ID, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_ROUTING_ID
  return octave_value(ZMQ_ROUTING_ID);
#else
  return octave_value(ZMQ_IDENTITY);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_TYPE", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_TYPE, args, nargout,"zeromq option constant")
{
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(2,1,0)
  return octave_value(ZMQ_TYPE);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_LAST_ENDPOINT", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_LAST_ENDPOINT, args, nargout,"zeromq option constant")
{
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(3,2,0)
  return octave_value(ZMQ_LAST_ENDPOINT);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_CONNECT_TIMEOUT", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_CONNECT_TIMEOUT, args, nargout,"zeromq option constant")
{
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(4,2,0)
  return octave_value(ZMQ_CONNECT_TIMEOUT);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_SOCKS_PROXY", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_SOCKS_PROXY, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_SOCKS_PROXY
  return octave_value(ZMQ_SOCKS_PROXY);
#else
  return octave_value(-1);
#endif
}


// PKG_ADD: autoload ("__ZMQ_OPT_CURVE_SERVER", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_CURVE_SERVER, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_CURVE
  return octave_value(ZMQ_CURVE_SERVER);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_CURVE_SECRETKEY", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_CURVE_SECRETKEY, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_CURVE
  return octave_value(ZMQ_CURVE_SECRETKEY);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_CURVE_PUBLICKEY", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_CURVE_PUBLICKEY, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_CURVE
  return octave_value(ZMQ_CURVE_PUBLICKEY);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_CURVE_SERVERKEY", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_CURVE_SERVERKEY, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_CURVE
  return octave_value(ZMQ_CURVE_SERVERKEY);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_PLAIN_SERVER", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_PLAIN_SERVER, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_PLAIN_SERVER
  return octave_value(ZMQ_PLAIN_SERVER);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_PLAIN_USERNAME", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_PLAIN_USERNAME, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_PLAIN_USERNAME
  return octave_value(ZMQ_PLAIN_USERNAME);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_PLAIN_PASSWORD", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_PLAIN_PASSWORD, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_PLAIN_PASSWORD
  return octave_value(ZMQ_PLAIN_PASSWORD);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_GSSAPI_SERVER", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_GSSAPI_SERVER, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_GSSAPI_SERVER
  return octave_value(ZMQ_GSSAPI_SERVER);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_GSSAPI_PLAINTEXT", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_GSSAPI_PLAINTEXT, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_GSSAPI_PLAINTEXT
  return octave_value(ZMQ_GSSAPI_PLAINTEXT);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_GSSAPI_PRINCIPAL", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_GSSAPI_PRINCIPAL, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_GSSAPI_PRINCIPAL
  return octave_value(ZMQ_GSSAPI_PRINCIPAL);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_GSSAPI_SERVICE_PRINCIPAL", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_GSSAPI_SERVICE_PRINCIPAL, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_GSSAPI_SERVICE_PRINCIPAL
  return octave_value(ZMQ_GSSAPI_SERVICE_PRINCIPAL);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_MECHANISM", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_MECHANISM, args, nargout,"zeromq option constant")
{
#ifdef ZMQ_MECHANISM
  return octave_value(ZMQ_MECHANISM);
#else
  return octave_value(-1);
#endif
}


// PKG_ADD: autoload ("__ZMQ_OPT_EVENTS", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_EVENTS, args, nargout,"zeromq option constant")
{
  return octave_value(ZMQ_EVENTS);
}

// ZMQ_EVENT constants
// PKG_ADD: autoload ("__ZMQ_EVENT_POLLIN", "zeromq.oct");
DEFUN_DLD (__ZMQ_EVENT_POLLIN, args, nargout,"zeromq option event constant")
{
  return octave_value(ZMQ_POLLIN);
}

// PKG_ADD: autoload ("__ZMQ_EVENT_POLLOUT", "zeromq.oct");
DEFUN_DLD (__ZMQ_EVENT_POLLOUT, args, nargout,"zeromq option event constant")
{
  return octave_value(ZMQ_POLLOUT);
}

// ZMQ_MECHANISM constants

// PKG_ADD: autoload ("__ZMQ_MECHANISM_NULL", "zeromq.oct");
DEFUN_DLD (__ZMQ_MECHANISM_NULL, args, nargout,"zeromq option mechanism constant")
{
#ifdef ZMQ_NULL
  return octave_value(ZMQ_NULL);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_MECHANISM_PLAIN", "zeromq.oct");
DEFUN_DLD (__ZMQ_MECHANISM_PLAIN, args, nargout,"zeromq option mechanism constant")
{
#ifdef ZMQ_PLAIN
  return octave_value(ZMQ_PLAIN);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_MECHANISM_CURVE", "zeromq.oct");
DEFUN_DLD (__ZMQ_MECHANISM_CURVE, args, nargout,"zeromq option mechanism constant")
{
#ifdef ZMQ_CURVE
  return octave_value(ZMQ_CURVE);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_MECHANISM_GSSAPI", "zeromq.oct");
DEFUN_DLD (__ZMQ_MECHANISM_GSSAPI, args, nargout,"zeromq option mechanism constant")
{
#ifdef ZMQ_GSSAPI
  return octave_value(ZMQ_GSSAPI);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_PRIORITY", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_PRIORITY, args, nargout,"zeromq socket constant")
{
  // NOTE: currently draft so may change
#ifdef ZMQ_PRIORITY
  return octave_value(ZMQ_PRIORITY);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_RATE", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_RATE, args, nargout,"zeromq socket constant")
{
#ifdef ZMQ_RATE
  return octave_value(ZMQ_RATE);
#else
  return octave_value(-1);
#endif
}

// PKG_ADD: autoload ("__ZMQ_OPT_BACKLOG", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_BACKLOG, args, nargout,"zeromq socket constant")
{
#ifdef ZMQ_BACKLOG
  return octave_value(ZMQ_BACKLOG);
#else
  return octave_value(-1);
#endif
}


#if 0
%! % check that all the values exist
%!assert (exist('__ZMQ_EVENT_POLLOUT'))
%!assert (exist('__ZMQ_EVENT_POLLIN'))
%!assert (exist('__ZMQ_OPT_EVENTS'))
%!assert (exist('__ZMQ_OPT_TYPE'))
%!assert (exist('__ZMQ_OPT_IDENTITY'))
%!assert (exist('__ZMQ_OPT_RCVMORE'))
%!assert (exist('__ZMQ_OPT_SUBSCRIBE'))
%!assert (exist('__ZMQ_OPT_UNSUBSCRIBE'))
%!assert (exist('__ZMQ_OPT_LAST_ENDPOINT'))
%!assert (exist('__ZMQ_OPT_CONNECT_TIMEOUT'))
%!assert (exist('__ZMQ_FLAG_DONTWAIT'))
%!assert (exist('__ZMQ_FLAG_SNDMORE'))
%!assert (exist('__ZMQ_SOCK_PUB'))
%!assert (exist('__ZMQ_SOCK_SUB'))
%!assert (exist('__ZMQ_SOCK_REQ'))
%!assert (exist('__ZMQ_SOCK_REP'))
%!assert (exist('__ZMQ_SOCK_PUSH'))
%!assert (exist('__ZMQ_SOCK_PULL'))
%!assert (exist('__ZMQ_SOCK_DEALER'))
%!assert (exist('__ZMQ_SOCK_ROUTER'))
%!assert (exist('__ZMQ_SOCK_PAIR'))
%!assert (exist('__ZMQ_SOCK_XPUB'))
%!assert (exist('__ZMQ_SOCK_XSUB'))
%!assert (exist('__ZMQ_SOCK_STREAM'))
#endif
