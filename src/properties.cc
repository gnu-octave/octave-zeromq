// Copyright (C) 2017 John Donoghue <john.donoghue@ieee.org>
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
#include <octave/oct-map.h>

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

#include "socket_class.h"

#include <zmq.h>

// PKG_ADD: autoload ("__zmq_properties__", "zeromq.oct");
DEFUN_DLD (__zmq_properties__, args, nargout,
        "-*- texinfo -*-\n\
@deftypefn {Loadable Function} {} __zmq_properties__ (@var{sock} ...)\n \
\n\
Internal function to get properties from a zmq socket\
@end deftypefn")
{
  octave_value_list ret;
  init_types ();

  if (args.length () < 1 || args.length() > 3 
    || args (0).type_id () != octave_zeromq_socket::static_type_id ())
    {
      print_usage ();
      return octave_value (-1);  
    }

  octave_zeromq_socket * sock = NULL;

  const octave_base_value& rep = args (0).get_rep ();

  sock = &((octave_zeromq_socket &)rep);

  if (args.length () == 1) 
    {
      // get all
      octave_map props;
      props.assign ("endpoint", octave_value (sock->getendpoint ()));
      props.assign ("type", octave_value (sock->gettypestr ()));

      octave_value_list ovl;
      ovl (0) = args (0);
      ovl (1) = ZMQ_IDENTITY;
      props.assign ("identity", OCTAVE__FEVAL (std::string ("zmq_getsockopt"), ovl, 1));

      ovl (0) = args (0);
      ovl (1) = ZMQ_RCVMORE;
      props.assign ("recvmore", OCTAVE__FEVAL (std::string ("zmq_getsockopt"), ovl, 1));

      ovl (0) = args (0);
      ovl (1) = ZMQ_EVENTS;
      props.assign ("events", OCTAVE__FEVAL (std::string ("zmq_getsockopt"), ovl, 1));

      ret = octave_value (props);
    }
  else if (args.length() == 2)
    {
      // get
      std::string prop = args (1).string_value ();
      std::transform (prop.begin (), prop.end (), prop.begin (), ::tolower);

      if (prop == "endpoint") ret = octave_value (sock->getendpoint ());
      else if(prop == "type") ret = octave_value (sock->gettypestr ());
      else if(prop == "identity")
        {
          octave_value_list ovl;
          ovl (0) = args (0);
          ovl (1) = ZMQ_IDENTITY;
          ret = OCTAVE__FEVAL (std::string ("zmq_getsockopt"), ovl, 1);
        }
      else if (prop == "recvmore")
        {
          octave_value_list ovl;
          ovl (0) = args (0);
          ovl (1) = ZMQ_RCVMORE;
          ret = OCTAVE__FEVAL (std::string ("zmq_getsockopt"), ovl, 1);
        }
      else if (prop == "events")
        {
          octave_value_list ovl;
          ovl (0) = args (0);
          ovl (1) = ZMQ_EVENTS;
          ret = OCTAVE__FEVAL (std::string ("zmq_getsockopt"), ovl, 1);
        }
      else
        error ("__zmq_properties__ unknown property '%s'", prop.c_str ());
    }
  else if (args.length () == 3)
    {
      // set
      std::string prop = args (1).string_value ();
      std::transform (prop.begin (), prop.end (), prop.begin (), ::tolower);

      if(prop == "identity")
        {
          octave_value_list ovl;
          ovl (0) = args (0);
          ovl (1) = ZMQ_IDENTITY;
          ovl (2) = args (2);
          ret = OCTAVE__FEVAL (std::string ("zmq_setsockopt"), ovl, 1);
        }
      else
        error ("__zmq_properties__ unknown/unsettable property '%s'", prop.c_str ());
 
    }

  return ret;
}

#if 0
%!test
%! a = zmq_socket();
%!
%! props = __zmq_properties__(a);
%! assert(props.type, "ZMQ_PUB")
%!
%! assert(__zmq_properties__(a, "type"), "ZMQ_PUB")
%! assert(__zmq_properties__(a, "recvmore"), 0)
%!
%! fail ("__zmq_properties__ (a,'invalid')", "unknown property");
%!
%! id = uint8([ 1, 2, 3 ]);
%! __zmq_properties__(a, "identity", id);
%! assert(__zmq_properties__(a, "identity"), id);
%! zmq_close(a);

%!error <Invalid call to __zmq_properties__> __zmq_properties__ ()

%!error <Invalid call to __zmq_properties__> __zmq_properties__ ()
#endif

