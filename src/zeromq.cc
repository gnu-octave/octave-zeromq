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

// PKG_ADD: autoload ("zeromq", "zeromq.oct");
DEFUN_DLD (zeromq, args, nargout,
        "-*- texinfo -*-\n\
@deftypefn {Package} {} zeromq\n \
The zeromq package provides GNU Octave bindings to the ZeroMQ library to provide\n \
fast distributed messaging options using IPC, TCP, TIPC and multi-casting.\n \
\n \
The usage is very close to the ZeroMQ library C language bindings for the socket \n \
creation and manipulation with the exception of creating a zeromq context, \n \
which is automatically done in the bindings internals.\n \
\n \
For example, a basic client that does a request / reply from a server on port\n \
local port 5555 (available as zmq_example1.m):\n \
\n \
@example\n \
\n \
%% Create socket and connect to server\n \
requester = zmq_socket (ZMQ_REQ);\n \
zmq_connect (requester, \"tcp://localhost:5555\");\n \
\n \
%% send some data\n \
zmq_send (requester, uint8(\"Hello\"), 5, 0); \n \
%% try to read up to 10 bytes of reply data.\n \
received = zmq_recv (requester, 10, 0);\n \
\n \
zmq_close (requester);\n \
@end example\n \
\n \
Implemented functions are:\n \
\n \
@table @asis\n \
@item zmq_bind\n \
Bind a zeromq socket to an endpoint.\n \
@item zmq_close\n \
Close a zeromq socket.\n \
@item zmq_connect\n \
Connect a zeromq socket to an endpoint\n \
@item zmq_disconnect\n \
Disconnect a zeromq socket from an endpoint\n \
@item zmq_errno\n \
Get system errno value.\n \
@item zmq_getsockopt\n \
Get current value of a zeromq socket option.\n \
@item zmq_has\n \
Check zmq for a given feature. \n \
@item zmq_poll\n \
Poll a socket or sockets for a timeout or incoming data available.\n \
@item zmq_recv\n \
Attempt to read data from a zeromq socket.\n \
@item zmq_send\n \
Attempt to send data from a zeromq socket.\n \
@item zmq_setsockopt\n \
Set a zeromq socket option.\n \
@item zmq_strerror\n \
Get the last zmq error string.\n \
@item zmq_unbind\n \
Unbind a previously bound zeromq socket.\n \
@item zmq_version\n \
Get the zeromq library version numbers.\n \
@end table\n \
\n \
Implemented functions depending on version of libzmq are:\n \
@table @asis\n \
@item zmq_curve_keypair\n \
Generate a random private/public keypair.\n \
@item zmq_curve_public\n \
Derive the public key from a private key.\n \
@item zmq_z85_decode\n \
decode a z85 encoded string to a binary key.\n \
@item zmq_z85_encode\n \
encode a binary key as Z85 printable text.\n \
@end table\n \
\n \
In addition, a iszmq function is provided to verify whether a object is a zeromq socket\n \
\n \
Example code files for zeromq usage:\n \
\n \
@table @asis\n \
@item zmq_example1\n \
Simple client REQ socket example that attempts to connect to a server and\n \
send a hello command and get back the response.\n \
@item zmq_example2\n \
Simple server REP socket example that creates the server that the client \n \
from example 1 will connect to and responds back to client 'requests'\n \
@item zmq_example3\n \
Simple server PUB socket example that creates 'weather' server sends\n \
weather updates for random zip codes.\n \
@item zmq_example4\n \
Simple client SUB socket example that creates client that connects to the 'weather' \n \
server and subscribes for weather updates from zip-code 10001.\n \
@item zmq_example5\n \
Simple client STREAM socket example that creates client that connects to octave.org \n \
and posts HEAD request.\n \
@end table\n \
\n \
View example code using @code{edit examples/example_name}\n \
\n \
ie: \n \
@example\n \
edit examples/zmq_example1\n \
@end example\n \
\n \
\n \
@seealso{http://zeromq.org, examples/zmq_example1.m, examples/zmq_example2.m, examples/zmq_example3.m,  examples/zmq_example4.m, examples/zmq_example5.m}\n \
@end deftypefn")
{
	return octave_value();
}

#if 0
%!test zeromq()
#endif
