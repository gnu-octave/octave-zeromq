---
layout: "default"
permalink: "/functions/14_zmqsetsockopt/"
pkg_name: "zeromq"
pkg_version: "1.5.7"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_setsockopt"
category: "ZeroMQ ZMQ_MECHANISM values"
func_name: "zmq_setsockopt"
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
<dt class="deftypefn def-line" id="index-zmq_005fsetsockopt"><span class="category-def">: </span><span><code class="def-type"><var class="var">status</var> =</code> <strong class="def-name">zmq_setsockopt</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">optionid</var>, <var class="var">value</var>)</code><a class="copiable-link" href="#index-zmq_005fsetsockopt"></a></span></dt>
<dd> 
<p>Set a socket option on a zeromq socket.
</p> 
<h4 class="subsubheading" id="Inputs"><span>Inputs<a class="copiable-link" href="#Inputs"></a></span></h4>
<p><var class="var">sock</var> - the socket to connect.
</p> 
<p><var class="var">optionid</var> - the setsockopt option to set.
</p> 
<p><var class="var">value</var> - the value to set.
</p> 
<p>Known valid <var class="var">optionid</var>s are:
 </p><dl class="table">
<dt><code class="code">ZMQ_SUBSCRIBE</code></dt>
<dd><p>Subscribe to incoming messages matching the value. The value is either a string or a uint8 array that
 must match the start of any incoming message
 </p></dd>
<dt><code class="code">ZMQ_UNSUBSCRIBE</code></dt>
<dd><p>Unsubscribe from incoming messages
 </p></dd>
<dt><code class="code">ZMQ_CONNECT_TIMEOUT</code></dt>
<dd><p>Set timeout for connect calls
 </p></dd>
<dt><code class="code">ZMQ_IDENTITY</code> or <code class="code">ZMQ_ROUTING_ID</code></dt>
<dd><p>Set the identity of a socket (string or uint8 data)
 </p></dd>
<dt><code class="code">ZMQ_RATE</code></dt>
<dd><p>Set the multicast data rate
 </p></dd>
<dt><code class="code">ZMQ_PRIORITY</code></dt>
<dd><p>Set the socket priority (linux only)
 </p></dd>
<dt><code class="code">ZMQ_BACKLOG</code></dt>
<dd><p>Set the queue length for incoming connections
 </p></dd>
<dt><code class="code">ZMQ_SOCKS_PROXY</code></dt>
<dd><p>Set the socks5 proxy value (string)
 </p></dd>
<dt><code class="code">ZMQ_CURVE_SERVER</code></dt>
<dd><p>Set whether socket is a curve server (1) or not (0)
 </p></dd>
<dt><code class="code">ZMQ_CURVE_PRIVATEKEY</code></dt>
<dd><p>Set the curve socket private key (string)
 </p></dd>
<dt><code class="code">ZMQ_CURVE_PUBLICKEY</code></dt>
<dd><p>Set the curve socket public key (string)
 </p></dd>
<dt><code class="code">ZMQ_CURVE_SERVERKEY</code></dt>
<dd><p>Set the curve socket public key (string)
 </p></dd>
<dt><code class="code">ZMQ_PLAIN_SERVER</code></dt>
<dd><p>Set whether socket server will use plain authentication (1) or not (0)
 </p></dd>
<dt><code class="code">ZMQ_PLAIN_USERNAME</code></dt>
<dd><p>Set the plain socket username (string)
 </p></dd>
<dt><code class="code">ZMQ_PLAIN_PASSWORD</code></dt>
<dd><p>Set the plain socket password (string)
 </p></dd>
<dt><code class="code">ZMQ_GSSAPI_SERVER</code></dt>
<dd><p>Set whether socket server will use gssapi authentication (1) or not (0)
 </p></dd>
<dt><code class="code">ZMQ_GSSAPI_PLAINTEXT</code></dt>
<dd><p>Set whether socket will encrypt gssapi authentication (1) or not (0)
 </p></dd>
<dt><code class="code">ZMQ_GSSAPI_PRINCIPAL</code></dt>
<dd><p>Set the name of the gssapi principal (string)
 </p></dd>
<dt><code class="code">ZMQ_GSSAPI_SERVICE_PRINCIPAL</code></dt>
<dd><p>Set the name of the gssapi service principal (string)
 </p></dd>
</dl>
 
<h4 class="subsubheading" id="Outputs"><span>Outputs<a class="copiable-link" href="#Outputs"></a></span></h4>
<p><var class="var">status</var> - status for setsockopt.
 On success, setsockopt will return <var class="var">status</var> of true 
</p> 
</dd></dl>