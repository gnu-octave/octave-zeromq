---
layout: "default"
permalink: "/functions/8_zmqpoll/"
pkg_name: "zeromq"
pkg_version: "1.5.6"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_poll"
category: "ZeroMQ functions"
func_name: "zmq_poll"
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
<dt class="deftypefn" id="index-zmq_005fpoll"><span class="category-def">: </span><span><code class="def-type"><var class="var">havedata</var> =</code> <strong class="def-name">zmq_poll</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">timeout</var>)</code><a class="copiable-link" href='#index-zmq_005fpoll'></a></span></dt>
<dt class="deftypefnx def-cmd-deftypefn" id="index-zmq_005fpoll-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">indexlist</var> =</code> <strong class="def-name">zmq_poll</strong> <code class="def-code-arguments">(<var class="var">socklist</var>, <var class="var">timeout</var>)</code><a class="copiable-link" href='#index-zmq_005fpoll-1'></a></span></dt>
<dd> 
<p>Wait up to timeout time for received data on socket.
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">sock</var> - the socket to wait on.
</p> 
<p><var class="var">socklist</var> - the array of sockets to wait on.
</p> 
<p><var class="var">timeout</var> - timeout time in milliseconds.
 A value of 0 will return without waiting. A value of -1 will wait until there is data.
</p> 
<h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">havedata</var> - value of 1 if have data.
</p> 
<p><var class="var">indexlist</var> - cell array of indexes to sockets that have data.
</p> 
 
</dd></dl>