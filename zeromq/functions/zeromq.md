---
layout: "default"
permalink: "/functions/6_zeromq/"
pkg_name: "zeromq"
pkg_version: "1.5.7"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zeromq"
category: "ZeroMQ ZMQ_MECHANISM values"
func_name: "zeromq"
navigation:
- id: "overview"
  name: "Overview"
  url: "/index"
- id: "Functions"
  name: "Function Reference"
  url: "/functions"
- id: "15_ZeroMQoverview"
  name: "&nbsp;&nbsp;ZeroMQ overview"
  url: "/functions/#15_ZeroMQoverview"
  subitems:
- id: "16_ZeroMQfunctions"
  name: "&nbsp;&nbsp;ZeroMQ functions"
  url: "/functions/#16_ZeroMQfunctions"
  subitems:
- id: "28_ZeroMQsockettypeconstants"
  name: "&nbsp;&nbsp;ZeroMQ socket type constants"
  url: "/functions/#28_ZeroMQsockettypeconstants"
  subitems:
- id: "31_ZeroMQgetsetsockoptconstants"
  name: "&nbsp;&nbsp;ZeroMQ get/setsockopt constants"
  url: "/functions/#31_ZeroMQgetsetsockoptconstants"
  subitems:
- id: "23_ZeroMQZMQEVENTSflags"
  name: "&nbsp;&nbsp;ZeroMQ ZMQ_EVENTS flags"
  url: "/functions/#23_ZeroMQZMQEVENTSflags"
  subitems:
- id: "27_ZeroMQreceivesendoptions"
  name: "&nbsp;&nbsp;ZeroMQ receive send options"
  url: "/functions/#27_ZeroMQreceivesendoptions"
  subitems:
- id: "27_ZeroMQZMQMECHANISMvalues"
  name: "&nbsp;&nbsp;ZeroMQ ZMQ_MECHANISM values"
  url: "/functions/#27_ZeroMQZMQMECHANISMvalues"
  subitems:
- id: "news"
  name: "News"
  url: "/news"
- id: "manual"
  name: "Manual"
  url: "/manual"
---
<dl class="first-deftypefn def-block">
<dt class="deftypefn def-line" id="index-zeromq"><span class="category-def">Package: </span><span><strong class="def-name">zeromq</strong><a class="copiable-link" href="#index-zeromq"></a></span></dt>
<dd><p>The zeromq package provides GNU Octave bindings to the ZeroMQ library to provide
 fast distributed messaging options using IPC, TCP, TIPC and multi-casting.
</p> 
<p>The usage is very close to the ZeroMQ library C language bindings for the socket 
 creation and manipulation with the exception of creating a zeromq context, 
 which is automatically done in the bindings internals.
</p> 
<p>For example, a basic client that does a request / reply from a server on port
 local port 5555 (available as zmq_example1.m):
</p> 
<div class="example">
<pre class="example-preformatted"> 
 %% Create socket and connect to server
 requester = zmq_socket (ZMQ_REQ);
 zmq_connect (requester, &quot;tcp://localhost:5555&quot;);
 
 %% send some data
 zmq_send (requester, uint8(&quot;Hello&quot;), 5, 0); 
 %% try to read up to 10 bytes of reply data.
 received = zmq_recv (requester, 10, 0);
 
 zmq_close (requester);
 </pre></div>
 
<p>Implemented functions are:
</p> 
<dl class="table">
<dt>zmq_bind</dt>
<dd><p>Bind a zeromq socket to an endpoint.
 </p></dd>
<dt>zmq_close</dt>
<dd><p>Close a zeromq socket.
 </p></dd>
<dt>zmq_connect</dt>
<dd><p>Connect a zeromq socket to an endpoint
 </p></dd>
<dt>zmq_disconnect</dt>
<dd><p>Disconnect a zeromq socket from an endpoint
 </p></dd>
<dt>zmq_errno</dt>
<dd><p>Get system errno value.
 </p></dd>
<dt>zmq_getsockopt</dt>
<dd><p>Get current value of a zeromq socket option.
 </p></dd>
<dt>zmq_has</dt>
<dd><p>Check zmq for a given feature. 
 </p></dd>
<dt>zmq_poll</dt>
<dd><p>Poll a socket or sockets for a timeout or incoming data available.
 </p></dd>
<dt>zmq_recv</dt>
<dd><p>Attempt to read data from a zeromq socket.
 </p></dd>
<dt>zmq_send</dt>
<dd><p>Attempt to send data from a zeromq socket.
 </p></dd>
<dt>zmq_setsockopt</dt>
<dd><p>Set a zeromq socket option.
 </p></dd>
<dt>zmq_strerror</dt>
<dd><p>Get the last zmq error string.
 </p></dd>
<dt>zmq_unbind</dt>
<dd><p>Unbind a previously bound zeromq socket.
 </p></dd>
<dt>zmq_version</dt>
<dd><p>Get the zeromq library version numbers.
 </p></dd>
</dl>
 
<p>Implemented functions depending on version of libzmq are:
 </p><dl class="table">
<dt>zmq_curve_keypair</dt>
<dd><p>Generate a random private/public keypair.
 </p></dd>
<dt>zmq_curve_public</dt>
<dd><p>Derive the public key from a private key.
 </p></dd>
<dt>zmq_z85_decode</dt>
<dd><p>decode a z85 encoded string to a binary key.
 </p></dd>
<dt>zmq_z85_encode</dt>
<dd><p>encode a binary key as Z85 printable text.
 </p></dd>
</dl>
 
<p>In addition, a iszmq function is provided to verify whether a object is a zeromq socket
</p> 
<p>Example code files for zeromq usage:
</p> 
<dl class="table">
<dt>zmq_example1</dt>
<dd><p>Simple client REQ socket example that attempts to connect to a server and
 send a hello command and get back the response.
 </p></dd>
<dt>zmq_example2</dt>
<dd><p>Simple server REP socket example that creates the server that the client 
 from example 1 will connect to and responds back to client &rsquo;requests&rsquo;
 </p></dd>
<dt>zmq_example3</dt>
<dd><p>Simple server PUB socket example that creates &rsquo;weather&rsquo; server sends
 weather updates for random zip codes.
 </p></dd>
<dt>zmq_example4</dt>
<dd><p>Simple client SUB socket example that creates client that connects to the &rsquo;weather&rsquo; 
 server and subscribes for weather updates from zip-code 10001.
 </p></dd>
<dt>zmq_example5</dt>
<dd><p>Simple client STREAM socket example that creates client that connects to octave.org 
 and posts HEAD request.
 </p></dd>
</dl>
 
<p>View example code using <code class="code">edit examples/example_name</code>
</p> 
<p>ie: 
 </p><div class="example">
<pre class="example-preformatted"> edit examples/zmq_example1
 </pre></div>
 
 

<p><strong class="strong">See also:</strong> http://zeromq.org, examples/zmq_example1.m, examples/zmq_example2.m, examples/zmq_example3.m,  examples/zmq_example4.m, examples/zmq_example5.m.
 </p></dd></dl>