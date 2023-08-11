---
layout: "default"
permalink: "/functions/14_zmqdisconnect/"
pkg_name: "zeromq"
pkg_version: "1.5.6"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_disconnect"
category: "ZeroMQ functions"
func_name: "zmq_disconnect"
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
<dt class="deftypefn" id="index-zmq_005fdisconnect"><span class="category-def">: </span><span><code class="def-type"><var class="var">status</var> =</code> <strong class="def-name">zmq_disconnect</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">endpoint</var>)</code><a class="copiable-link" href='#index-zmq_005fdisconnect'></a></span></dt>
<dd> 
<p>Disconnect a zeromq socket from an endpoint.
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">sock</var> - the socket to disconnect from.
</p> 
<p><var class="var">endpoint</var> - a previously connected endpoint string to disconnect.
</p> 
<h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">status</var> - status for disconnect.
 On success, disconnect will return a <var class="var">status</var> of true 
</p> 

<p><strong class="strong">See also:</strong> zmq_socket, zmq_connect.
 </p></dd></dl>