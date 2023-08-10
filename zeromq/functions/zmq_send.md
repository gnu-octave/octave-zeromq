---
layout: "default"
permalink: "/functions/8_zmqsend/"
pkg_name: "zeromq"
pkg_version: "1.5.5"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_send"
category: "ZeroMQ functions"
func_name: "zmq_send"
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
<dt class="deftypefn" id="index-zmq_005fsend"><span class="category-def">: </span><span><code class="def-type"><var class="var">count</var> =</code> <strong class="def-name">zmq_send</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">data</var>)</code><a class="copiable-link" href='#index-zmq_005fsend'></a></span></dt>
<dt class="deftypefnx def-cmd-deftypefn" id="index-zmq_005fsend-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">count</var> =</code> <strong class="def-name">zmq_send</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">data</var>, <var class="var">flags</var>)</code><a class="copiable-link" href='#index-zmq_005fsend-1'></a></span></dt>
<dd> 
<p>Attempt to send to <var class="var">data</var> bytes of data to zeromq socket.
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">sock</var> - the socket to receive from.
</p> 
<p><var class="var">data</var> - data to send - either string or uint8 type.
</p> 
<p><var class="var">flags</var> - optional flags to pass to send
</p> 
<h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">count</var> - number of bytes written to socket, or -1 on error.
</p> 
</dd></dl>