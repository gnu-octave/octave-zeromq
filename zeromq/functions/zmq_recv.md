---
layout: "default"
permalink: "/functions/8_zmqrecv/"
pkg_name: "zeromq"
pkg_version: "1.5.6"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_recv"
category: "ZeroMQ functions"
func_name: "zmq_recv"
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
<dt class="deftypefn" id="index-zmq_005frecv"><span class="category-def">: </span><span><code class="def-type"><var class="var">data</var> =</code> <strong class="def-name">zmq_recv</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">len</var>)</code><a class="copiable-link" href='#index-zmq_005frecv'></a></span></dt>
<dt class="deftypefnx def-cmd-deftypefn" id="index-zmq_005frecv-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">data</var> =</code> <strong class="def-name">zmq_recv</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">len</var>, <var class="var">flags</var>)</code><a class="copiable-link" href='#index-zmq_005frecv-1'></a></span></dt>
<dd> 
<p>Attempt to receive up to <var class="var">len</var> bytes of data from  zeromq socket.
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">sock</var> - the socket to receive from.
</p> 
<p><var class="var">len</var> - number of bytes to read.
</p> 
<p><var class="var">flags</var> - optional flags to pass to recv
</p> 
<h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">data</var> - the read data in an uint8 array.  
 </p>
<p><strong class="strong">See also:</strong> zmq_socket.
 </p></dd></dl>