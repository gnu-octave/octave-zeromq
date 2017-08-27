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

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

#include "socket_class.h"

// zeromq includes
#include <zmq.h>

#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)  
  #define RECV_POLL_TIME 1000
#else
  #define RECV_POLL_TIME 100
#endif

static void * global_context = NULL;

#ifdef DEFINE_OCTAVE_ALLOCATOR 
DEFINE_OCTAVE_ALLOCATOR (octave_zeromq_socket);
#endif
DEFINE_OV_TYPEID_FUNCTIONS_AND_DATA (octave_zeromq_socket, "octave_zeromq_socket", "octave_zeromq_socket");

octave_zeromq_socket::octave_zeromq_socket (void)
 : fieldnames(3)
{
  sock = 0;
  type = -1;
  fieldnames[0] = "type";
  fieldnames[1] = "endpoint";
  fieldnames[2] = "identity";
}

octave_zeromq_socket::octave_zeromq_socket (const octave_zeromq_socket &s)
{
  // should never be called
  sock = 0;
  type = s.type;
  fieldnames = s.fieldnames;
}

octave_zeromq_socket::~octave_zeromq_socket(void)
{
  close ();
}

octave_base_value *
octave_zeromq_socket::empty_clone (void) const 
{
  return new octave_zeromq_socket();
}

octave_base_value *
octave_zeromq_socket::clone (void) const 
{
  return new octave_zeromq_socket (*this);
}

void *
octave_zeromq_socket::socket (void)
{
  return sock;
}

const void *
octave_zeromq_socket::socket (void) const
{
  return sock;
}

int
octave_zeromq_socket::socktype (void) const
{
  return type;
}

bool
octave_zeromq_socket::create (int socket_type)
{
  if (sock)
    {
      error ("zeromq: Already created\n");
      return false;
    }

  sock = zmq_socket (global_context, socket_type);
    
  if (sock == 0)
    {
      error ("zeromq: failed to create socket - %s\n", zmq_strerror (errno));
      return false;
    }
  type = socket_type;
    
  return true;
}

void
octave_zeromq_socket::close (void)
{
  if (sock) 
    zmq_close (sock);
  
  sock = 0;
  type = -1;
  endpoint = "";
}

bool
octave_zeromq_socket::connect (const std::string &inendpoint)
{
  if (sock == 0)
    {
      error ("zeromq: must create socket before calling connect\n");
      return false;
    }

  if (zmq_connect (sock, inendpoint.c_str ()) != 0)
    {
      error ("zeromq: failed to connect socket - %s\n", zmq_strerror (errno));
      return false;
    }
    
  endpoint = inendpoint;
 
  return true;
}

bool
octave_zeromq_socket::disconnect (const std::string &inendpoint)
{
  if (sock == 0)
    {
      error ("zeromq: must create socket before calling disconnect\n");
      return false;
    }

  if (zmq_disconnect (sock, inendpoint.c_str ()) != 0)
    {
      error ("zeromq: failed to disconnect socket - %s\n", zmq_strerror (errno));
      return false;
    }
    
  endpoint = inendpoint;
 
  return true;
}


bool
octave_zeromq_socket::bind (const std::string &inendpoint)
{
  if (sock == 0)
    {
      error ("zeromq: must create socket before calling bind\n");
      return false;
    }

  if (zmq_bind (sock, inendpoint.c_str ()))
    {
      error ("zeromq: failed to bind socket - %s\n", zmq_strerror (errno));
      return false;
    }

  endpoint = inendpoint;
 
  return true;
}

bool
octave_zeromq_socket::unbind (const std::string &inendpoint)
{
  if (sock == 0)
    {
      error ("zeromq: must create socket before calling unbind\n");
      return false;
    }

  if (zmq_unbind (sock, inendpoint.c_str ()))
    {
      error ("zeromq: failed to unbind socket - %s\n", zmq_strerror (errno));
      return false;
    }

  endpoint = "";
 
  return true;
}


bool
octave_zeromq_socket::setsockopt (int opt, const void * val, size_t len)
{
  if (sock == 0)
    {
      error ("zeromq: invalid socket\n");
      return false;
    }
  if (zmq_setsockopt (sock, opt, val, len))
    {
      error ("zeromq: failed to setsockopt - %s\n", zmq_strerror (errno));
      return false;
    }
 
  return true;
}

bool
octave_zeromq_socket::getsockopt (int opt, void * val, size_t *len)
{
  if (sock == 0)
    {
      error ("zeromq: invalid socket\n");
      return false;
    }
  if (zmq_getsockopt (sock, opt, val, len))
    {
      error ("zeromq: failed to getsockopt - %s\n", zmq_strerror (errno));
      return false;
    }
 
  return true;
}

int
octave_zeromq_socket::send (const std::string &str, int flags)
{
  return send ((const uint8_t *)str.c_str (), str.length (), flags) ;
}

int
octave_zeromq_socket::send (const uint8_t *data, size_t sz, int flags)
{
  if (sock == 0)
    {
      error ("zeromq: must create socket before calling send\n");
      return -1;
    }
#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)  
  zmq_msg_t msg;
  if(zmq_msg_init_size(&msg,sz))
    {
      error ("zeromq: failed to create msg\n");
      return -1;
    }
  memcpy(zmq_msg_data(&msg), data, sz);
  int len = zmq_send (sock, &msg, flags);
  zmq_msg_close(&msg);
#else
  // new versions of zmq have a zmq_send for data
  int len = zmq_send (sock, data, sz, flags); 
#endif
  return len;
}

int
octave_zeromq_socket::recv (uint8_t *data, size_t sz, int flags)
{
  if (sock == 0)
    {
      error ("zeromq: must create socket before calling recv\n");
      return -1;
    }

  // if want to wait for data
  if ((flags & ZMQ_NOBLOCK) == 0)
    {
      int have_data = 0;
  
      do
        {
          zmq_pollitem_t pitem;
          pitem.socket = sock;
          pitem.events = ZMQ_POLLIN;
          pitem.fd = 0;

          have_data = zmq_poll (&pitem, 1, RECV_POLL_TIME);
          OCTAVE_QUIT;
        }
      while (have_data == 0);
  
      if (have_data == -1)
        {
          error ("zeromq: error waiting for data in recv\n");
        }
    }

  int len = -1;
#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)  
  zmq_msg_t msg;
  if (zmq_msg_init (&msg))
    {
      error ("zeromq: failed to create msg\n");
      return -1;
    }

  len = zmq_recv (sock, &msg, flags);

  if (len > 0)
    {
      if (len > sz) len = sz;
      memcpy (data, zmq_msg_data (&msg), len);
    }
  zmq_msg_close (&msg);
#else
  len = zmq_recv (sock, data, sz, flags);
  if (len >= 0 && len > sz) len = sz;
#endif

  return len;
}

int
octave_zeromq_socket::gettypeval (const std::string &str)
{
  if(str == "ZMQ_PUB") return ZMQ_PUB;
  if(str == "ZMQ_SUB") return ZMQ_SUB;
  if(str == "ZMQ_REQ") return ZMQ_REQ;
  if(str == "ZMQ_REP") return ZMQ_REP;
  if(str == "ZMQ_DEALER") return ZMQ_DEALER;
  if(str == "ZMQ_PAIR") return ZMQ_PAIR;
  if(str == "ZMQ_ROUTER") return ZMQ_ROUTER;
  if(str == "ZMQ_PUSH") return ZMQ_PUSH;
  if(str == "ZMQ_PULL") return ZMQ_PULL;
  error ("ctave_zeromq_socket: unknown socktype '%s'", str);
  return -1;
}
 
std::string
octave_zeromq_socket::gettypestr (int intype) const
{
  std::string s = "";
  if(intype == -1) intype = type;
  switch(intype)
    {
    case ZMQ_PUB: s = "ZMQ_PUB"; break;
    case ZMQ_SUB: s = "ZMQ_SUB"; break;
    case ZMQ_REQ: s = "ZMQ_REQ"; break;
    case ZMQ_REP: s = "ZMQ_REP"; break;
    case ZMQ_PUSH: s = "ZMQ_PUSH"; break;
    case ZMQ_PULL: s = "ZMQ_PULL"; break;
    case ZMQ_DEALER: s = "ZMQ_DEALER"; break;
    case ZMQ_PAIR: s = "ZMQ_PAIR"; break;
    case ZMQ_ROUTER: s = "ZMQ_ROUTER"; break;
    default:  s = "NONE"; break;
    }
  return s;
}
 
void
octave_zeromq_socket::print (std::ostream& os, bool pr_as_read_syntax) const
{
  print_raw (os, pr_as_read_syntax);
  newline (os);
}

void
octave_zeromq_socket::print (std::ostream& os, bool pr_as_read_syntax)
{
  print_raw (os, pr_as_read_syntax);
  newline (os);
}

void
octave_zeromq_socket::print_raw (std::ostream& os, bool pr_as_read_syntax) const
{
  os << "  ZeroMQ socket"; newline (os);
  
  if(sock)
    {
      os << "    type:     " << gettypestr();
    
      newline(os);
    
      os << "    endpoint: " << endpoint;
      newline(os);
    }
  else
    {
      os << "    Invalid"; newline(os);
    }
}

octave_value_list
octave_zeromq_socket::subsref (const std::string& type, const std::list<octave_value_list>& idx, int nargout)
{
  octave_value_list retval;
  int skip = 1;

  switch (type[0])
    {
    default:
      error ("octave_zeromq_socket object cannot be indexed with %c", type[0]);
      break;
    case '.':
      {
        octave_value_list ovl;
        // inc ref count as assign this to octave_value
        count++; 
        ovl (0) = octave_value (this);
        ovl (1) = (idx.front ()) (0);
        retval = OCTAVE__FEVAL (std::string ("__zmq_properties__"), ovl, 1);
      }
      break;
    }

  if (idx.size () > 1 && type.length () > 1)
    retval = retval (0).next_subsref (nargout, type, idx, skip);

  return retval;
}

octave_value
octave_zeromq_socket::subsasgn (const std::string& type, const std::list<octave_value_list>& idx, const octave_value& rhs)
{
  octave_value retval;

  switch (type[0])
    {
    default:
      error ("octave_zeromq_socket object cannot be indexed with %c", type[0]);
      break;
    case '.':
      if (type.length () == 1)
        {
          octave_value_list ovl;
          // inc ref count as assign this to octave_value
          count++; 
          ovl (0) = octave_value (this);
          ovl (1) = (idx.front ()) (0);
          ovl (2) = rhs;
          OCTAVE__FEVAL (std::string ("__zmq_properties__"), ovl, 1);
 
          // property assignment
          if (! error_state)
            {
              count++;
              retval = octave_value (this);
            }
        }
      else if (type.length () > 1 && type[1] == '.')
        {
          // pass along any further assignments
          octave_value_list u = subsref (type.substr (0, 1), idx, 1);
          if (! error_state)
            {
              std::list<octave_value_list> next_idx (idx);
              next_idx.erase (next_idx.begin ());
              u (0).subsasgn(type.substr (1), next_idx, rhs);
              if (!error_state)
                {
                  count++;
                  retval = octave_value (this);
                }
            } 
        }
      else
        {
          error ("octave_zeromq_socket invalid index");
        }

    }
  return retval;
}

static bool type_loaded = false;

void init_types(void)
{
  if (!type_loaded)
    {
     octave_zeromq_socket::register_type ();
     type_loaded = true;
    }
  if (!global_context)
    {
#if ZMQ_VERSION < ZMQ_MAKE_VERSION(3,0,0)  
      global_context = zmq_init (1);
#else
      global_context = zmq_ctx_new ();
#endif   
    }
}

