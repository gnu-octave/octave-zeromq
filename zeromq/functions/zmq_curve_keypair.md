---
layout: "default"
permalink: "/functions/17_zmqcurvekeypair/"
pkg_name: "zeromq"
pkg_version: "1.5.5"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_curve_keypair"
category: "ZeroMQ functions"
func_name: "zmq_curve_keypair"
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
<dt class="deftypefn" id="index-zmq_005fcurve_005fkeypair"><span class="category-def">: </span><span><code class="def-type">[ <var class="var">publickey</var>, <var class="var">privatekey</var> ] =</code> <strong class="def-name">zmq_curve_keypair</strong> <code class="def-code-arguments">()</code><a class="copiable-link" href='#index-zmq_005fcurve_005fkeypair'></a></span></dt>
<dd> 
<p>Generate a random private/public keypair
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p>None
 </p><h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">publickey</var> is a string that is the encoded public key
</p> 
<p><var class="var">privatekey</var> is a string that is the encoded private key
</p> 
</dd></dl>