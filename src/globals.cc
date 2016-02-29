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
#include <octave/parse.h>
#include <octave/toplev.h>
#include <octave/cmd-hist.h>
#include <octave/symtab.h>
#include <octave/variables.h>
#include <octave/Array.h>

#include <octave/defun-dld.h>

// zeromq includes
#include <zmq.h>

// socket types ......

// PKG_ADD: autoload ("ZMQ_SOCK_PUB", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_PUB, args, nargout,"zeromq constant")
{
  return octave_value(ZMQ_PUB);
}

// PKG_ADD: autoload ("ZMQ_SOCK_SUB", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_SUB, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_SUB);
}

// PKG_ADD: autoload ("ZMQ_SOCK_REQ", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_REQ, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_REQ);
}

// PKG_ADD: autoload ("ZMQ_SOCK_REP", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_REP, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_REP);
}

// PKG_ADD: autoload ("ZMQ_SOCK_PUSH", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_PUSH, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_PUSH);
}

// PKG_ADD: autoload ("ZMQ_SOCK_PULL", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_PULL, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_PULL);
}

// PKG_ADD: autoload ("ZMQ_SOCK_DEALER", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_DEALER, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_DEALER);
}

// PKG_ADD: autoload ("ZMQ_SOCK_ROUTER", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_ROUTER, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_ROUTER);
}

// PKG_ADD: autoload ("ZMQ_SOCK_PAIR", "zeromq.oct");
DEFUN_DLD (ZMQ_SOCK_PAIR, args, nargout,"zeromq socket type constant")
{
  return octave_value(ZMQ_PAIR);
}

// socket send/recv flags --------------------
// PKG_ADD: autoload ("ZMQ_FLAG_SNDMORE", "zeromq.oct");
DEFUN_DLD (ZMQ_FLAG_SNDMORE, args, nargout,"zeromq flag constant")
{
  return octave_value(ZMQ_SNDMORE);
}

// PKG_ADD: autoload ("ZMQ_FLAG_DONTWAIT", "zeromq.oct");
DEFUN_DLD (ZMQ_FLAG_DONTWAIT, args, nargout,"zeromq flag constant")
{
//  return octave_value(ZMQ_DONTWAIT);
  return octave_value(ZMQ_NOBLOCK);
}

// set/get socket options ----------------------------

// PKG_ADD: autoload ("ZMQ_OPT_SUBSCRIBE", "zeromq.oct");
DEFUN_DLD (ZMQ_OPT_SUBSCRIBE, args, nargout,"zeromq option constant")
{
  return octave_value(ZMQ_SUBSCRIBE);
}

// PKG_ADD: autoload ("ZMQ_OPT_UNSUBSCRIBE", "zeromq.oct");
DEFUN_DLD (ZMQ_OPT_UNSUBSCRIBE, args, nargout,"zeromq option constant")
{
  return octave_value(ZMQ_UNSUBSCRIBE);
}

// PKG_ADD: autoload ("ZMQ_OPT_RCVMORE", "zeromq.oct");
DEFUN_DLD (ZMQ_OPT_RCVMORE, args, nargout,"zeromq option constant")
{
  return octave_value(ZMQ_RCVMORE);
}

// PKG_ADD: autoload ("ZMQ_OPT_TYPE", "zeromq.oct");
DEFUN_DLD (ZMQ_OPT_TYPE, args, nargout,"zeromq option constant")
{
#if ZMQ_VERSION >= ZMQ_MAKE_VERSION(2,1,0)
  return octave_value(ZMQ_TYPE);
#else
  return octave_value(-1);
#endif
}

