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
  return octave_value(ZMQ_IDENTITY);
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

// PKG_ADD: autoload ("__ZMQ_OPT_EVENTS", "zeromq.oct");
DEFUN_DLD (__ZMQ_OPT_EVENTS, args, nargout,"zeromq option constant")
{
  return octave_value(ZMQ_EVENTS);
}

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
#endif
