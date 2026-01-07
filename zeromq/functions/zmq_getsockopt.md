---
layout: "default"
permalink: "/functions/14_zmqgetsockopt/"
pkg_name: "zeromq"
pkg_version: "1.5.7"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_getsockopt"
category: "ZeroMQ ZMQ_MECHANISM values"
func_name: "zmq_getsockopt"
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
<dt class="deftypefn def-line" id="index-zmq_005fgetsockopt"><span class="category-def">: </span><span><code class="def-type"><var class="var">value</var> =</code> <strong class="def-name">zmq_getsockopt</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">optionid</var>)</code><a class="copiable-link" href="#index-zmq_005fgetsockopt"></a></span></dt>
<dd> 
<p>Get the current value of an option.
</p> 
<h4 class="subsubheading" id="Inputs"><span>Inputs<a class="copiable-link" href="#Inputs"></a></span></h4>
<p><var class="var">sock</var> - the socket to connect.
</p> 
<p><var class="var">optionid</var> - the setsockopt option to set.
</p> 
<p>Valid <var class="var">optionid</var>s are:
 </p><dl class="table">
<dt><code class="code">ZMQ_RCVMORE</code></dt>
<dd><p>Flag for whether a message has been split into multiple messages. The return value will be either 0 or 1.
 </p></dd>
<dt><code class="code">ZMQ_TYPE</code></dt>
<dd><p>Socket type for zeromq socket created with zmq_socket.
 Valid types are the same as the socket type value specified with zmq_socket. 
 </p></dd>
<dt><code class="code">ZMQ_EVENTS</code></dt>
<dd><p>Get the event state of zeromq socket.
 The returned value is a bit mask that may contain the following set values:
 </p><ul class="itemize mark-bullet">
<li><code class="code">ZMQ_POLLIN</code> set when at least one message is available to read and zmq_recv will not block.
 </li><li><code class="code">ZMQ_POLLOUT</code> set when at least one message can be written without zmq_send blocking.
 </li></ul>
</dd>
<dt><code class="code">ZMQ_IDENTITY</code> or <code class="code">ZMQ_ROUTING_ID</code></dt>
<dd><p>Get the socket identity value
 </p></dd>
<dt><code class="code">ZMQ_RATE</code></dt>
<dd><p>Get the multicast data rate
 </p></dd>
<dt><code class="code">ZMQ_PRIORITY</code></dt>
<dd><p>Get socket priority (linux only)
 </p></dd>
<dt><code class="code">ZMQ_BACKLOG</code></dt>
<dd><p>Get length of queue for pending connections
 </p></dd>
<dt><code class="code">ZMQ_LAST_ENDPOINT</code></dt>
<dd><p>Get the last endpoint the socket was connected to
 </p></dd>
<dt><code class="code">ZMQ_CONNECT_TIMEOUT</code></dt>
<dd><p>Get the connect timeout value
 </p></dd>
<dt><code class="code">ZMQ_SOCKS_PROXY</code></dt>
<dd><p>Get the SOCKS5 proxy value (string)
 </p></dd>
<dt><code class="code">ZMQ_CURVE_SERVER</code></dt>
<dd><p>Get whether socket is a curve server (1) or not (0)
 </p></dd>
<dt><code class="code">ZMQ_CURVE_PRIVATEKEY</code></dt>
<dd><p>Get a the curve socket private key (string)
 </p></dd>
<dt><code class="code">ZMQ_CURVE_PUBLICKEY</code></dt>
<dd><p>Get a the curve socket public key (string)
 </p></dd>
<dt><code class="code">ZMQ_CURVE_SERVERKEY</code></dt>
<dd><p>Get a the curve socket public key (string)
 </p></dd>
<dt><code class="code">ZMQ_PLAIN_SERVER</code></dt>
<dd><p>Get whether socket server will use plain authentication (1) or not (0)
 </p></dd>
<dt><code class="code">ZMQ_PLAIN_USERNAME</code></dt>
<dd><p>Get the plain socket username (string)
 </p></dd>
<dt><code class="code">ZMQ_PLAIN_PASSWORD</code></dt>
<dd><p>Get the plain socket password (string)
 </p></dd>
<dt><code class="code">ZMQ_GSSAPI_SERVER</code></dt>
<dd><p>Get whether socket server will use gssapi authentication (1) or not (0)
 </p></dd>
<dt><code class="code">ZMQ_GSSAPI_PLAINTEXT</code></dt>
<dd><p>Get whether socket will encrypt gssapi authentication (1) or not (0)
 </p></dd>
<dt><code class="code">ZMQ_GSSAPI_PRINCIPAL</code></dt>
<dd><p>Get the name of the gssapi principal (string)
 </p></dd>
<dt><code class="code">ZMQ_GSSAPI_SERVICE_PRINCIPAL</code></dt>
<dd><p>Get the name of the gssapi service principal (string)
 </p></dd>
<dt><code class="code">ZMQ_MECHANISM</code></dt>
<dd><p>Get the security mechanism (ZMQ_NULL, ZMQ_PLAIN, ZMQ_CURVE, ZMQ_GSSAPI)
 </p></dd>
</dl>
 
<h4 class="subsubheading" id="Outputs"><span>Outputs<a class="copiable-link" href="#Outputs"></a></span></h4>
<p><var class="var">value</var> - the value set for the option, or [].
</p> 

<p><strong class="strong">See also:</strong> zmq_socket, zmq_setsockopt.
 </p></dd></dl>