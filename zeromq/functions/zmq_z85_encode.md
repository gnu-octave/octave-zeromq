---
layout: "default"
permalink: "/functions/14_zmqz85encode/"
pkg_name: "zeromq"
pkg_version: "1.5.7"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_z85_encode"
category: "ZeroMQ ZMQ_MECHANISM values"
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
<dt class="deftypefn def-line" id="index-zmq_005fz85_005fencode"><span class="category-def">: </span><span><code class="def-type"><var class="var">dest</var> =</code> <strong class="def-name">zmq_z85_encode</strong> <code class="def-code-arguments">(<var class="var">data</var>)</code><a class="copiable-link" href="#index-zmq_005fz85_005fencode"></a></span></dt>
<dd> 
<p>Encode a binary key as Z85 printable text.
</p> 
<h4 class="subsubheading" id="Inputs"><span>Inputs<a class="copiable-link" href="#Inputs"></a></span></h4>
<p><var class="var">data</var> - uint8 data that must have a size divisible by 4.
</p> 
<h4 class="subsubheading" id="Outputs"><span>Outputs<a class="copiable-link" href="#Outputs"></a></span></h4>
<p><var class="var">dest</var> - string encoded data
 </p></dd></dl>