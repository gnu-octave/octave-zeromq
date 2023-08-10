---
layout: "default"
permalink: "/functions/7_zmqhas/"
pkg_name: "zeromq"
pkg_version: "1.5.5"
pkg_description: "ZeroMQ bindings for GNU Octave"
title: "Zeromq Toolkit - zmq_has"
category: "ZeroMQ functions"
func_name: "zmq_has"
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
<dt class="deftypefn" id="index-zmq_005fhas"><span class="category-def">: </span><span><code class="def-type"><var class="var">yesno</var> =</code> <strong class="def-name">zmq_has</strong> <code class="def-code-arguments">(<var class="var">feature</var>)</code><a class="copiable-link" href='#index-zmq_005fhas'></a></span></dt>
<dd> 
<p>Check if the zmq library supports a given feature.
</p> 
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">feature</var> is the name of feature to check.
</p> 
<p>Currently known features are:
 </p><dl class="table">
<dt>&rsquo;ipc&rsquo;</dt>
<dd><p>library supports the ipc:// protocol
 </p></dd>
<dt>&rsquo;pgm&rsquo;</dt>
<dd><p>library supports the pgm:// protocol
 </p></dd>
<dt>&rsquo;tipc&rsquo;</dt>
<dd><p>library supports the tipc:// protocol
 </p></dd>
<dt>&rsquo;norm&rsquo;</dt>
<dd><p>library supports the norm:// protocol
 </p></dd>
<dt>&rsquo;curve&rsquo;</dt>
<dd><p>library supports the CURVE security mechanism
 </p></dd>
<dt>&rsquo;gssapi&rsquo;</dt>
<dd><p>library supports the GSSAPI security mechanism
 </p></dd>
<dt>&rsquo;draft&rsquo;</dt>
<dd><p>library was built with the draft API.
 </p></dd>
</dl>
 
<h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">yesno</var> - set to true if the feature is available, otherwise false. 
 </p></dd></dl>