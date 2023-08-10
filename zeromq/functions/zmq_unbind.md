---
layout: "default"
permalink: "/functions/10_zmqunbind/"
pkg_name: "zeromq"
pkg_version: "1.5.5"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_unbind"
category: "ZeroMQ functions"
func_name: "zmq_unbind"
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
<dt class="deftypefn" id="index-zmq_005funbind"><span class="category-def">: </span><span><code class="def-type"><var class="var">status</var> =</code> <strong class="def-name">zmq_unbind</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">endpoint</var>)</code><a class="copiable-link" href='#index-zmq_005funbind'></a></span></dt>
<dd> 
<p>Unbind a previously bound zeromq socket from a endpoint.
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">sock</var> - the socket to unbind.
</p> 
<p><var class="var">endpoint</var> - the endpoint string to unbind.
</p> 
<h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">status</var> - status for unbind.
 On success, unbind will return a <var class="var">status</var> of true 
</p> 
</dd></dl>