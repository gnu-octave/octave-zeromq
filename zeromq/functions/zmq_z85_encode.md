---
layout: "default"
permalink: "/functions/14_zmqz85encode/"
pkg_name: "zeromq"
pkg_version: "1.5.6"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_z85_encode"
category: "ZeroMQ functions"
func_name: "zmq_z85_encode"
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
<dt class="deftypefn" id="index-zmq_005fz85_005fencode"><span class="category-def">: </span><span><code class="def-type"><var class="var">dest</var> =</code> <strong class="def-name">zmq_z85_encode</strong> <code class="def-code-arguments">(<var class="var">data</var>)</code><a class="copiable-link" href='#index-zmq_005fz85_005fencode'></a></span></dt>
<dd> 
<p>Encode a binary key as Z85 printable text.
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">data</var> - uint8 data that must have a size divisible by 4.
</p> 
<h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">dest</var> - string encoded data
 </p></dd></dl>