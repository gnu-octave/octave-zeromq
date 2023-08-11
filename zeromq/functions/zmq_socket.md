---
layout: "default"
permalink: "/functions/10_zmqsocket/"
pkg_name: "zeromq"
pkg_version: "1.5.6"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_socket"
category: "ZeroMQ functions"
func_name: "zmq_socket"
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
- id: "16_ZeroMQfunctions"
  name: "&nbsp;&nbsp;ZeroMQ functions"
  url: "/functions/#16_ZeroMQfunctions"
- id: "28_ZeroMQsockettypeconstants"
  name: "&nbsp;&nbsp;ZeroMQ socket type constants"
  url: "/functions/#28_ZeroMQsockettypeconstants"
- id: "31_ZeroMQgetsetsockoptconstants"
  name: "&nbsp;&nbsp;ZeroMQ get/setsockopt constants"
  url: "/functions/#31_ZeroMQgetsetsockoptconstants"
- id: "23_ZeroMQZMQEVENTSflags"
  name: "&nbsp;&nbsp;ZeroMQ ZMQ_EVENTS flags"
  url: "/functions/#23_ZeroMQZMQEVENTSflags"
- id: "27_ZeroMQreceivesendoptions"
  name: "&nbsp;&nbsp;ZeroMQ receive send options"
  url: "/functions/#27_ZeroMQreceivesendoptions"
- id: "27_ZeroMQZMQMECHANISMvalues"
  name: "&nbsp;&nbsp;ZeroMQ ZMQ_MECHANISM values"
  url: "/functions/#27_ZeroMQZMQMECHANISMvalues"
- id: "news"
  name: "News"
  url: "/news"
- id: "manual"
  name: "Manual"
  url: "/manual"
---
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fsocket"><span class="category-def">: </span><span><code class="def-type"><var class="var">sock</var> =</code> <strong class="def-name">zmq_socket</strong> <code class="def-code-arguments">(<var class="var">type</var>)</code><a class="copiable-link" href='#index-zmq_005fsocket'></a></span></dt>
<dd> 
<p>Create a zeromq socket.
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">type</var> - the socket type to create.
</p> 
<p>Supported socket types are:
 </p><dl class="table">
<dt><code class="code">ZMQ_PUB</code></dt>
<dd><p>Publish socket
 </p></dd>
<dt><code class="code">ZMQ_SUB</code></dt>
<dd><p>Subscribe socket
 </p></dd>
<dt><code class="code">ZMQ_REQ</code></dt>
<dd><p>Request socket
 </p></dd>
<dt><code class="code">ZMQ_REP</code></dt>
<dd><p>Reply socket
 </p></dd>
<dt><code class="code">ZMQ_PULL</code></dt>
<dd><p>Pull socket
 </p></dd>
<dt><code class="code">ZMQ_PUSH</code></dt>
<dd><p>Push socket
 </p></dd>
<dt><code class="code">ZMQ_PAIR</code></dt>
<dd><p>Pair socket
 </p></dd>
<dt><code class="code">ZMQ_DEALER</code></dt>
<dd><p>Dealer socket
 </p></dd>
<dt><code class="code">ZMQ_ROUTER</code></dt>
<dd><p>Router socket
 </p></dd>
<dt><code class="code">ZMQ_XPUB</code></dt>
<dd><p>Publish socket
 </p></dd>
<dt><code class="code">ZMQ_XSUB</code></dt>
<dd><p>Subscribe socket
 </p></dd>
<dt><code class="code">ZMQ_STREAM</code></dt>
<dd><p>Stream socket
 </p></dd>
</dl>
 
<h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">sock</var> - an instance of <var class="var">octave_zeromq_socket</var> class.
</p> 
</dd></dl>