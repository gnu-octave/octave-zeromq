---
layout: "default"
permalink: "/manual/"
title: "Zeromq Toolkit - Manual"
pkg_name: "zeromq"
version: "1.5.6"
description: "ZeroMQ bindings for GNU Octave"
navigation:
- id: "overview"
  name: "Overview"
  url: "/index"
- id: "Functions"
  name: "Function Reference"
  url: "/functions"
- id: "news"
  name: "News"
  url: "/news"
- id: "manual"
  name: "Manual"
- id: "Installing-and-loading-1"
  name: "&nbsp;&nbsp; Installing and loading"
  url: "/manual/#Installing-and-loading-1"
- id: "Basic-Usage-Overview-1"
  name: "&nbsp;&nbsp; Basic Usage Overview"
  url: "/manual/#Basic-Usage-Overview-1"
- id: "Examples-1"
  name: "&nbsp;&nbsp; Examples"
  url: "/manual/#Examples-1"
- id: "Function-Reference-1"
  name: "&nbsp;&nbsp; Function Reference"
  url: "/manual/#Function-Reference-1"
---
<div class="top-level-extent" id="Top">
<div class="nav-panel">
<p>
Next: <a href="#Installing-and-loading" accesskey="n" rel="next">Installing and loading</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h1 class="top" id="Introduction">Introduction</h1>
<p>The ZeroMQ toolkit is a set of  ZeroMQ bindings for GNU Octave
</p>
<div class="element-contents" id="SEC_Contents">
<h2 class="contents-heading">Table of Contents</h2>
<div class="contents">
<ul class="toc-numbered-mark">
  <li><a id="toc-Installing-and-loading-1" href="#Installing-and-loading">1 Installing and loading</a>
  <ul class="toc-numbered-mark">
    <li><a id="toc-Online-Direct-install" href="#Online-Direct-install">1.1 Online Direct install</a></li>
    <li><a id="toc-Off_002dline-install" href="#Off_002dline-install">1.2 Off-line install</a></li>
    <li><a id="toc-Loading" href="#Loading">1.3 Loading</a></li>
  </ul></li>
  <li><a id="toc-Basic-Usage-Overview-1" href="#Basic-Usage-Overview">2 Basic Usage Overview</a></li>
  <li><a id="toc-Examples-1" href="#Examples">3 Examples</a>
  <ul class="toc-numbered-mark">
    <li><a id="toc-Example1" href="#Example1">3.1 Example1</a></li>
    <li><a id="toc-Example2" href="#Example2">3.2 Example2</a></li>
    <li><a id="toc-Example3" href="#Example3">3.3 Example3</a></li>
    <li><a id="toc-Example4" href="#Example4">3.4 Example4</a></li>
    <li><a id="toc-Example5" href="#Example5">3.5 Example5</a></li>
  </ul></li>
  <li><a id="toc-Function-Reference-1" href="#Function-Reference">4 Function Reference</a>
  <ul class="toc-numbered-mark">
    <li><a id="toc-ZeroMQ-functions-1" href="#ZeroMQ-functions">4.1 ZeroMQ functions</a>
    <ul class="toc-numbered-mark">
      <li><a id="toc-iszmq" href="#iszmq">4.1.1 iszmq</a></li>
      <li><a id="toc-zmq_005fbind" href="#zmq_005fbind">4.1.2 zmq_bind</a></li>
      <li><a id="toc-zmq_005fclose" href="#zmq_005fclose">4.1.3 zmq_close</a></li>
      <li><a id="toc-zmq_005fconnect" href="#zmq_005fconnect">4.1.4 zmq_connect</a></li>
      <li><a id="toc-zmq_005fcurve_005fkeypair" href="#zmq_005fcurve_005fkeypair">4.1.5 zmq_curve_keypair</a></li>
      <li><a id="toc-zmq_005fcurve_005fpublic" href="#zmq_005fcurve_005fpublic">4.1.6 zmq_curve_public</a></li>
      <li><a id="toc-zmq_005fdisconnect" href="#zmq_005fdisconnect">4.1.7 zmq_disconnect</a></li>
      <li><a id="toc-zmq_005ferrno" href="#zmq_005ferrno">4.1.8 zmq_errno</a></li>
      <li><a id="toc-zmq_005fgetsockopt" href="#zmq_005fgetsockopt">4.1.9 zmq_getsockopt</a></li>
      <li><a id="toc-zmq_005fhas" href="#zmq_005fhas">4.1.10 zmq_has</a></li>
      <li><a id="toc-zmq_005fpoll" href="#zmq_005fpoll">4.1.11 zmq_poll</a></li>
      <li><a id="toc-zmq_005frecv" href="#zmq_005frecv">4.1.12 zmq_recv</a></li>
      <li><a id="toc-zmq_005fsend" href="#zmq_005fsend">4.1.13 zmq_send</a></li>
      <li><a id="toc-zmq_005fsetsockopt" href="#zmq_005fsetsockopt">4.1.14 zmq_setsockopt</a></li>
      <li><a id="toc-zmq_005fsocket" href="#zmq_005fsocket">4.1.15 zmq_socket</a></li>
      <li><a id="toc-zmq_005fstrerror" href="#zmq_005fstrerror">4.1.16 zmq_strerror</a></li>
      <li><a id="toc-zmq_005funbind" href="#zmq_005funbind">4.1.17 zmq_unbind</a></li>
      <li><a id="toc-zmq_005fversion" href="#zmq_005fversion">4.1.18 zmq_version</a></li>
      <li><a id="toc-zmq_005fz85_005fdecode" href="#zmq_005fz85_005fdecode">4.1.19 zmq_z85_decode</a></li>
      <li><a id="toc-zmq_005fz85_005fencode" href="#zmq_005fz85_005fencode">4.1.20 zmq_z85_encode</a></li>
    </ul></li>
    <li><a id="toc-ZeroMQ-socket-type-constants-1" href="#ZeroMQ-socket-type-constants">4.2 ZeroMQ socket type constants</a>
    <ul class="toc-numbered-mark">
      <li><a id="toc-ZMQ_005fDEALER" href="#ZMQ_005fDEALER">4.2.1 ZMQ_DEALER</a></li>
      <li><a id="toc-ZMQ_005fPAIR" href="#ZMQ_005fPAIR">4.2.2 ZMQ_PAIR</a></li>
      <li><a id="toc-ZMQ_005fPUB" href="#ZMQ_005fPUB">4.2.3 ZMQ_PUB</a></li>
      <li><a id="toc-ZMQ_005fPULL" href="#ZMQ_005fPULL">4.2.4 ZMQ_PULL</a></li>
      <li><a id="toc-ZMQ_005fPUSH" href="#ZMQ_005fPUSH">4.2.5 ZMQ_PUSH</a></li>
      <li><a id="toc-ZMQ_005fREP" href="#ZMQ_005fREP">4.2.6 ZMQ_REP</a></li>
      <li><a id="toc-ZMQ_005fREQ" href="#ZMQ_005fREQ">4.2.7 ZMQ_REQ</a></li>
      <li><a id="toc-ZMQ_005fROUTER" href="#ZMQ_005fROUTER">4.2.8 ZMQ_ROUTER</a></li>
      <li><a id="toc-ZMQ_005fSTREAM" href="#ZMQ_005fSTREAM">4.2.9 ZMQ_STREAM</a></li>
      <li><a id="toc-ZMQ_005fSUB" href="#ZMQ_005fSUB">4.2.10 ZMQ_SUB</a></li>
      <li><a id="toc-ZMQ_005fXPUB" href="#ZMQ_005fXPUB">4.2.11 ZMQ_XPUB</a></li>
      <li><a id="toc-ZMQ_005fXSUB" href="#ZMQ_005fXSUB">4.2.12 ZMQ_XSUB</a></li>
    </ul></li>
    <li><a id="toc-ZeroMQ-get_002fsetsockopt-constants-1" href="#ZeroMQ-get_002fsetsockopt-constants">4.3 ZeroMQ get/setsockopt constants</a>
    <ul class="toc-numbered-mark">
      <li><a id="toc-ZMQ_005fBACKLOG" href="#ZMQ_005fBACKLOG">4.3.1 ZMQ_BACKLOG</a></li>
      <li><a id="toc-ZMQ_005fCONNECT_005fTIMEOUT" href="#ZMQ_005fCONNECT_005fTIMEOUT">4.3.2 ZMQ_CONNECT_TIMEOUT</a></li>
      <li><a id="toc-ZMQ_005fCURVE_005fPUBLICKEY" href="#ZMQ_005fCURVE_005fPUBLICKEY">4.3.3 ZMQ_CURVE_PUBLICKEY</a></li>
      <li><a id="toc-ZMQ_005fCURVE_005fSECRETKEY" href="#ZMQ_005fCURVE_005fSECRETKEY">4.3.4 ZMQ_CURVE_SECRETKEY</a></li>
      <li><a id="toc-ZMQ_005fCURVE_005fSERVER" href="#ZMQ_005fCURVE_005fSERVER">4.3.5 ZMQ_CURVE_SERVER</a></li>
      <li><a id="toc-ZMQ_005fCURVE_005fSERVERKEY" href="#ZMQ_005fCURVE_005fSERVERKEY">4.3.6 ZMQ_CURVE_SERVERKEY</a></li>
      <li><a id="toc-ZMQ_005fEVENTS" href="#ZMQ_005fEVENTS">4.3.7 ZMQ_EVENTS</a></li>
      <li><a id="toc-ZMQ_005fGSSAPI_005fPLAINTEXT" href="#ZMQ_005fGSSAPI_005fPLAINTEXT">4.3.8 ZMQ_GSSAPI_PLAINTEXT</a></li>
      <li><a id="toc-ZMQ_005fGSSAPI_005fPRINCIPAL" href="#ZMQ_005fGSSAPI_005fPRINCIPAL">4.3.9 ZMQ_GSSAPI_PRINCIPAL</a></li>
      <li><a id="toc-ZMQ_005fGSSAPI_005fSERVER" href="#ZMQ_005fGSSAPI_005fSERVER">4.3.10 ZMQ_GSSAPI_SERVER</a></li>
      <li><a id="toc-ZMQ_005fGSSAPI_005fSERVICE_005fPRINCIPAL" href="#ZMQ_005fGSSAPI_005fSERVICE_005fPRINCIPAL">4.3.11 ZMQ_GSSAPI_SERVICE_PRINCIPAL</a></li>
      <li><a id="toc-ZMQ_005fIDENTITY" href="#ZMQ_005fIDENTITY">4.3.12 ZMQ_IDENTITY</a></li>
      <li><a id="toc-ZMQ_005fLAST_005fENDPOINT" href="#ZMQ_005fLAST_005fENDPOINT">4.3.13 ZMQ_LAST_ENDPOINT</a></li>
      <li><a id="toc-ZMQ_005fMECHANISM" href="#ZMQ_005fMECHANISM">4.3.14 ZMQ_MECHANISM</a></li>
      <li><a id="toc-ZMQ_005fPLAIN_005fPASSWORD" href="#ZMQ_005fPLAIN_005fPASSWORD">4.3.15 ZMQ_PLAIN_PASSWORD</a></li>
      <li><a id="toc-ZMQ_005fPLAIN_005fSERVER" href="#ZMQ_005fPLAIN_005fSERVER">4.3.16 ZMQ_PLAIN_SERVER</a></li>
      <li><a id="toc-ZMQ_005fPLAIN_005fUSERNAME" href="#ZMQ_005fPLAIN_005fUSERNAME">4.3.17 ZMQ_PLAIN_USERNAME</a></li>
      <li><a id="toc-ZMQ_005fPRIORITY" href="#ZMQ_005fPRIORITY">4.3.18 ZMQ_PRIORITY</a></li>
      <li><a id="toc-ZMQ_005fRATE" href="#ZMQ_005fRATE">4.3.19 ZMQ_RATE</a></li>
      <li><a id="toc-ZMQ_005fRCVMORE" href="#ZMQ_005fRCVMORE">4.3.20 ZMQ_RCVMORE</a></li>
      <li><a id="toc-ZMQ_005fROUTING_005fID" href="#ZMQ_005fROUTING_005fID">4.3.21 ZMQ_ROUTING_ID</a></li>
      <li><a id="toc-ZMQ_005fSOCKS_005fPROXY" href="#ZMQ_005fSOCKS_005fPROXY">4.3.22 ZMQ_SOCKS_PROXY</a></li>
      <li><a id="toc-ZMQ_005fSUBSCRIBE" href="#ZMQ_005fSUBSCRIBE">4.3.23 ZMQ_SUBSCRIBE</a></li>
      <li><a id="toc-ZMQ_005fTYPE" href="#ZMQ_005fTYPE">4.3.24 ZMQ_TYPE</a></li>
      <li><a id="toc-ZMQ_005fUNSUBSCRIBE" href="#ZMQ_005fUNSUBSCRIBE">4.3.25 ZMQ_UNSUBSCRIBE</a></li>
    </ul></li>
    <li><a id="toc-ZeroMQ-ZMQ_005fEVENTS-flags-1" href="#ZeroMQ-ZMQ_005fEVENTS-flags">4.4 ZeroMQ ZMQ_EVENTS flags</a>
    <ul class="toc-numbered-mark">
      <li><a id="toc-ZMQ_005fPOLLIN" href="#ZMQ_005fPOLLIN">4.4.1 ZMQ_POLLIN</a></li>
      <li><a id="toc-ZMQ_005fPOLLOUT" href="#ZMQ_005fPOLLOUT">4.4.2 ZMQ_POLLOUT</a></li>
    </ul></li>
    <li><a id="toc-ZeroMQ-receive-send-options-1" href="#ZeroMQ-receive-send-options">4.5 ZeroMQ receive send options</a>
    <ul class="toc-numbered-mark">
      <li><a id="toc-ZMQ_005fDONTWAIT" href="#ZMQ_005fDONTWAIT">4.5.1 ZMQ_DONTWAIT</a></li>
      <li><a id="toc-ZMQ_005fSNDMORE" href="#ZMQ_005fSNDMORE">4.5.2 ZMQ_SNDMORE</a></li>
    </ul></li>
    <li><a id="toc-ZeroMQ-ZMQ_005fMECHANISM-values-1" href="#ZeroMQ-ZMQ_005fMECHANISM-values">4.6 ZeroMQ ZMQ_MECHANISM values</a>
    <ul class="toc-numbered-mark">
      <li><a id="toc-ZMQ_005fCURVE" href="#ZMQ_005fCURVE">4.6.1 ZMQ_CURVE</a></li>
      <li><a id="toc-ZMQ_005fGSSAPI" href="#ZMQ_005fGSSAPI">4.6.2 ZMQ_GSSAPI</a></li>
      <li><a id="toc-ZMQ_005fNULL" href="#ZMQ_005fNULL">4.6.3 ZMQ_NULL</a></li>
      <li><a id="toc-ZMQ_005fPLAIN" href="#ZMQ_005fPLAIN">4.6.4 ZMQ_PLAIN</a></li>
    </ul></li>
  </ul></li>
  <li><a id="toc-GNU-General-Public-License" href="#Copying">Appendix A GNU General Public License</a></li>
  <li><a id="toc-Index-1" href="#Index" rel="index">Index</a></li>
</ul>
</div>
</div>
<hr>
<div class="chapter-level-extent" id="Installing-and-loading">
<div class="nav-panel">
<p>
Next: <a href="#Basic-Usage-Overview" accesskey="n" rel="next">Basic Usage Overview</a>, Previous: <a href="#Top" accesskey="p" rel="prev">Introduction</a>, Up: <a href="#Top" accesskey="u" rel="up">Introduction</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h2 class="chapter" id="Installing-and-loading-1">1 Installing and loading</h2>
<a class="index-entry-id" id="index-Installing-and-loading"></a>
<p>The ZeroMQ toolkit must be installed and then loaded to be used.
</p>
<p>It can be installed in <abbr class="acronym">GNU</abbr> Octave directly from octave-forge,
or can be installed in an off-line mode via a downloaded tarball.
</p>
<p>The toolkit has a dependency on the zeromq library (<a class="url" href="https://zeromq.org">https://zeromq.org</a>), so it must be installed in order
to successfully install the ZeroMQ toolkit.
</p>
<p>For Fedora: <code class="code">yum install zeromq-devel</code> 
</p>
<p>For Ubuntu: <code class="code">apt install libzmq-dev</code> 
</p>
<p>The toolkit must be then be loaded once per each <abbr class="acronym">GNU</abbr> Octave session in order to use its functionality.
</p>
<ul class="mini-toc">
<li><a href="#Online-Direct-install" accesskey="1">Online Direct install</a></li>
<li><a href="#Off_002dline-install" accesskey="2">Off-line install</a></li>
<li><a href="#Loading" accesskey="3">Loading</a></li>
</ul>
<div class="section-level-extent" id="Online-Direct-install">
<h3 class="section">1.1 Online Direct install</h3>
<a class="index-entry-id" id="index-Online-install"></a>
<p>With an internet connection available, the ZeroMQ package can be installed from
octave-forge using the following command within <abbr class="acronym">GNU</abbr> Octave:
</p>
<div class="example">
<pre class="example-preformatted">pkg install -forge zeromq
</pre></div>
<p>The latest released version of the toolkit will be downloaded and installed.
</p>
</div>
<div class="section-level-extent" id="Off_002dline-install">
<h3 class="section">1.2 Off-line install</h3>
<a class="index-entry-id" id="index-Off_002dline-install"></a>
<p>With the ZeroMQ toolkit package already downloaded, and in the current directory when running
<abbr class="acronym">GNU</abbr> Octave, the package can be installed using the following command within <abbr class="acronym">GNU</abbr> Octave:
</p>
<div class="example">
<pre class="example-preformatted">pkg install zeromq-1.5.6.tar.gz
</pre></div>
</div>
<div class="section-level-extent" id="Loading">
<h3 class="section">1.3 Loading</h3>
<a class="index-entry-id" id="index-Loading"></a>
<p>Regardless of the method of installing the ZeroMQ toolkit, in order to use its functions,
the toolkit must be loaded using the pkg load command:
</p>
<div class="example">
<pre class="example-preformatted">pkg load zeromq
</pre></div>
<p>The toolkit must be loaded on each <abbr class="acronym">GNU</abbr> Octave session.
</p>
<hr>
</div>
</div>
<div class="chapter-level-extent" id="Basic-Usage-Overview">
<div class="nav-panel">
<p>
Next: <a href="#Examples" accesskey="n" rel="next">Examples</a>, Previous: <a href="#Installing-and-loading" accesskey="p" rel="prev">Installing and loading</a>, Up: <a href="#Top" accesskey="u" rel="up">Introduction</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h2 class="chapter" id="Basic-Usage-Overview-1">2 Basic Usage Overview</h2>
<a class="index-entry-id" id="index-Basic-Usage-Overview"></a>
<p>The usage is very close to the ZeroMQ library C language bindings for the socket 
creation and manipulation with the exception of creating a zeromq context, 
which is automatically done in the bindings internals.
</p>
<p>For example, a basic client that does a request / reply from a server on port
local port 5555 (available as zmq_example1.m):
</p>
<div class="example">
<pre class="example-preformatted">
%% Create socket and connect to server
requester = zmq_socket (ZMQ_REQ);
zmq_connect (requester, &quot;tcp://localhost:5555&quot;);
%% send some data
zmq_send (requester, uint8(&quot;Hello&quot;), 5, 0); 
%% try to read up to 10 bytes of reply data.
received = zmq_recv (requester, 10, 0);
zmq_close (requester);
</pre></div>
<p>An overview of the package can be displayed by running <code class="code">help zeromq</code>
</p>
<p>Help for each function can be displayed by  <code class="code">help thefunctionname</code>
</p>
<p>ie: 
</p><div class="example">
<pre class="example-preformatted">help iszmq
</pre></div>
<hr>
</div>
<div class="chapter-level-extent" id="Examples">
<div class="nav-panel">
<p>
Next: <a href="#Function-Reference" accesskey="n" rel="next">Function Reference</a>, Previous: <a href="#Basic-Usage-Overview" accesskey="p" rel="prev">Basic Usage Overview</a>, Up: <a href="#Top" accesskey="u" rel="up">Introduction</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h2 class="chapter" id="Examples-1">3 Examples</h2>
<a class="index-entry-id" id="index-Examples"></a>
<p>There are several examples that come with the toolkit.
</p>
<p>View example code using <code class="code">edit examples/example_name</code>
</p>
<p>ie: 
</p><div class="example">
<pre class="example-preformatted">edit examples/zmq_example1
</pre></div>
<ul class="mini-toc">
<li><a href="#Example1" accesskey="1">Example1</a></li>
<li><a href="#Example2" accesskey="2">Example2</a></li>
<li><a href="#Example3" accesskey="3">Example3</a></li>
<li><a href="#Example4" accesskey="4">Example4</a></li>
<li><a href="#Example5" accesskey="5">Example5</a></li>
</ul>
<div class="section-level-extent" id="Example1">
<h3 class="section">3.1 Example1</h3>
<a class="index-entry-id" id="index-Example1"></a>
<p>Simple client REQ socket example that attempts to connect to a server and
send a hello command and get back the response.
</p>
<div class="example">
<pre class="example-preformatted">edit examples/zmq_example1
</pre></div>
</div>
<div class="section-level-extent" id="Example2">
<h3 class="section">3.2 Example2</h3>
<a class="index-entry-id" id="index-Example2"></a>
<p>Simple server REP socket example that creates the server that the client 
from example 1 will connect to and responds back to client &rsquo;requests&rsquo;
</p>
<div class="example">
<pre class="example-preformatted">edit examples/zmq_example2
</pre></div>
</div>
<div class="section-level-extent" id="Example3">
<h3 class="section">3.3 Example3</h3>
<a class="index-entry-id" id="index-Example3"></a>
<p>Simple server PUB socket example that creates &rsquo;weather&rsquo; server sends
weather updates for random zip codes.
</p>
<div class="example">
<pre class="example-preformatted">edit examples/zmq_example3
</pre></div>
</div>
<div class="section-level-extent" id="Example4">
<h3 class="section">3.4 Example4</h3>
<a class="index-entry-id" id="index-Example4"></a>
<p>Simple client SUB socket example that creates client that connects to the &rsquo;weather&rsquo;
server and subscribes for weather updates from zip-code 10001.
</p>
<div class="example">
<pre class="example-preformatted">edit examples/zmq_example4
</pre></div>
</div>
<div class="section-level-extent" id="Example5">
<h3 class="section">3.5 Example5</h3>
<a class="index-entry-id" id="index-Example5"></a>
<p>Simple client STREAM socket example that creates client that connects to octave.org
and posts HEAD request.
</p>
<div class="example">
<pre class="example-preformatted">edit examples/zmq_example5
</pre></div>
<hr>
</div>
</div>
<div class="chapter-level-extent" id="Function-Reference">
<div class="nav-panel">
<p>
Next: <a href="#Copying" accesskey="n" rel="next">GNU General Public License</a>, Previous: <a href="#Examples" accesskey="p" rel="prev">Examples</a>, Up: <a href="#Top" accesskey="u" rel="up">Introduction</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h2 class="chapter" id="Function-Reference-1">4 Function Reference</h2>
<a class="index-entry-id" id="index-Function-Reference"></a>
<p>The functions currently available in the ZeroMQ toolkit are described below;
</p>
<ul class="mini-toc">
<li><a href="#ZeroMQ-functions" accesskey="1">ZeroMQ functions</a></li>
<li><a href="#ZeroMQ-socket-type-constants" accesskey="2">ZeroMQ socket type constants</a></li>
<li><a href="#ZeroMQ-get_002fsetsockopt-constants" accesskey="3">ZeroMQ get/setsockopt constants</a></li>
<li><a href="#ZeroMQ-ZMQ_005fEVENTS-flags" accesskey="4">ZeroMQ ZMQ_EVENTS flags</a></li>
<li><a href="#ZeroMQ-receive-send-options" accesskey="5">ZeroMQ receive send options</a></li>
<li><a href="#ZeroMQ-ZMQ_005fMECHANISM-values" accesskey="6">ZeroMQ ZMQ_MECHANISM values</a></li>
</ul>
<hr>
<div class="section-level-extent" id="ZeroMQ-functions">
<div class="nav-panel">
<p>
Next: <a href="#ZeroMQ-socket-type-constants" accesskey="n" rel="next">ZeroMQ socket type constants</a>, Up: <a href="#Function-Reference" accesskey="u" rel="up">Function Reference</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h3 class="section" id="ZeroMQ-functions-1">4.1 ZeroMQ functions</h3>
<a class="index-entry-id" id="index-ZeroMQ-functions"></a>
<ul class="mini-toc">
<li><a href="#iszmq" accesskey="1">iszmq</a></li>
<li><a href="#zmq_005fbind" accesskey="2">zmq_bind</a></li>
<li><a href="#zmq_005fclose" accesskey="3">zmq_close</a></li>
<li><a href="#zmq_005fconnect" accesskey="4">zmq_connect</a></li>
<li><a href="#zmq_005fcurve_005fkeypair" accesskey="5">zmq_curve_keypair</a></li>
<li><a href="#zmq_005fcurve_005fpublic" accesskey="6">zmq_curve_public</a></li>
<li><a href="#zmq_005fdisconnect" accesskey="7">zmq_disconnect</a></li>
<li><a href="#zmq_005ferrno" accesskey="8">zmq_errno</a></li>
<li><a href="#zmq_005fgetsockopt" accesskey="9">zmq_getsockopt</a></li>
<li><a href="#zmq_005fhas">zmq_has</a></li>
<li><a href="#zmq_005fpoll">zmq_poll</a></li>
<li><a href="#zmq_005frecv">zmq_recv</a></li>
<li><a href="#zmq_005fsend">zmq_send</a></li>
<li><a href="#zmq_005fsetsockopt">zmq_setsockopt</a></li>
<li><a href="#zmq_005fsocket">zmq_socket</a></li>
<li><a href="#zmq_005fstrerror">zmq_strerror</a></li>
<li><a href="#zmq_005funbind">zmq_unbind</a></li>
<li><a href="#zmq_005fversion">zmq_version</a></li>
<li><a href="#zmq_005fz85_005fdecode">zmq_z85_decode</a></li>
<li><a href="#zmq_005fz85_005fencode">zmq_z85_encode</a></li>
</ul>
<div class="subsection-level-extent" id="iszmq">
<h4 class="subsection">4.1.1 iszmq</h4>
<a class="index-entry-id" id="index-iszmq"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-iszmq-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">tf</var> =</code> <strong class="def-name">iszmq</strong> <code class="def-code-arguments">(<var class="var">h</var>)</code><a class="copiable-link" href='#index-iszmq-1'></a></span></dt>
<dd>
<p>Determine whether <var class="var">h</var> is a zeromq socket object.
</p>
<h4 class="subsubheading" id="Inputs">Inputs</h4>
<p><var class="var">h</var> - a potential zeromq socket object to check
</p><h4 class="subsubheading" id="Outputs">Outputs</h4>
<p><var class="var">tf</var> - true if <var class="var">h</var> is a zeromq socket object, otherwise false.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fbind">
<h4 class="subsection">4.1.2 zmq_bind</h4>
<a class="index-entry-id" id="index-zmq_005fbind"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fbind-1"><span class="category-def">: </span><span><code class="def-type">status =</code> <strong class="def-name">zmq_bind</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">endpoint</var>)</code><a class="copiable-link" href='#index-zmq_005fbind-1'></a></span></dt>
<dd>
<p>Bind a zeromq socket to a endpoint.
</p>
<h4 class="subsubheading" id="Inputs-1">Inputs</h4>
<p><var class="var">sock</var> - the socket to bind.
</p>
<p><var class="var">endpoint</var> - the endpoint string.
</p>
<h4 class="subsubheading" id="Outputs-1">Outputs</h4>
<p><var class="var">status</var> - status for bind.
On success, bind will return a <var class="var">status</var> of true 
</p>
<p><strong class="strong">See also:</strong> zmq_socket .
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fclose">
<h4 class="subsection">4.1.3 zmq_close</h4>
<a class="index-entry-id" id="index-zmq_005fclose"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fclose-1"><span class="category-def">: </span><span><strong class="def-name">zmq_close</strong> <code class="def-code-arguments">(<var class="var">sock</var>)</code><a class="copiable-link" href='#index-zmq_005fclose-1'></a></span></dt>
<dd>
<p>Close a zeromq socket.
</p>
<h4 class="subsubheading" id="Inputs-2">Inputs</h4>
<p><var class="var">sock</var> - the socket type to close.
</p><h4 class="subsubheading" id="Outputs-2">Outputs</h4>
<p>None
</p>
<p><strong class="strong">See also:</strong> zmq_socket .
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fconnect">
<h4 class="subsection">4.1.4 zmq_connect</h4>
<a class="index-entry-id" id="index-zmq_005fconnect"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fconnect-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">status</var> =</code> <strong class="def-name">zmq_connect</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">endpoint</var>)</code><a class="copiable-link" href='#index-zmq_005fconnect-1'></a></span></dt>
<dd>
<p>Connect a zeromq socket to a endpoint.
</p><h4 class="subsubheading" id="Inputs-3">Inputs</h4>
<p><var class="var">sock</var> - the socket to connect.
</p>
<p><var class="var">endpoint</var> - the endpoint string.
</p>
<h4 class="subsubheading" id="Outputs-3">Outputs</h4>
<p><var class="var">status</var> - status for connect.
On success, connect will return a <var class="var">status</var> of true 
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fcurve_005fkeypair">
<h4 class="subsection">4.1.5 zmq_curve_keypair</h4>
<a class="index-entry-id" id="index-zmq_005fcurve_005fkeypair"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fcurve_005fkeypair-1"><span class="category-def">: </span><span><code class="def-type">[ <var class="var">publickey</var>, <var class="var">privatekey</var> ] =</code> <strong class="def-name">zmq_curve_keypair</strong> <code class="def-code-arguments">()</code><a class="copiable-link" href='#index-zmq_005fcurve_005fkeypair-1'></a></span></dt>
<dd>
<p>Generate a random private/public keypair
</p>
<h4 class="subsubheading" id="Inputs-4">Inputs</h4>
<p>None
</p><h4 class="subsubheading" id="Outputs-4">Outputs</h4>
<p><var class="var">publickey</var> is a string that is the encoded public key
</p>
<p><var class="var">privatekey</var> is a string that is the encoded private key
</p>
<p><strong class="strong">See also:</strong> zmq_z85_encode .
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fcurve_005fpublic">
<h4 class="subsection">4.1.6 zmq_curve_public</h4>
<a class="index-entry-id" id="index-zmq_005fcurve_005fpublic"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fcurve_005fpublic-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">publickey</var> =</code> <strong class="def-name">zmq_curve_public</strong> <code class="def-code-arguments">(<var class="var">privatekey</var>)</code><a class="copiable-link" href='#index-zmq_005fcurve_005fpublic-1'></a></span></dt>
<dd>
<p>Derive the public key from a private key
</p>
<h4 class="subsubheading" id="Inputs-5">Inputs</h4>
<p><var class="var">privatekey</var> is a string that is the encoded private key. It must be 40 characters in length
</p>
<h4 class="subsubheading" id="Outputs-5">Outputs</h4>
<p><var class="var">publickey</var> is a string that is the encoded public key
</p>
<p><strong class="strong">See also:</strong> zmq_curve_keypair.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fdisconnect">
<h4 class="subsection">4.1.7 zmq_disconnect</h4>
<a class="index-entry-id" id="index-zmq_005fdisconnect"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fdisconnect-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">status</var> =</code> <strong class="def-name">zmq_disconnect</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">endpoint</var>)</code><a class="copiable-link" href='#index-zmq_005fdisconnect-1'></a></span></dt>
<dd>
<p>Disconnect a zeromq socket from an endpoint.
</p>
<h4 class="subsubheading" id="Inputs-6">Inputs</h4>
<p><var class="var">sock</var> - the socket to disconnect from.
</p>
<p><var class="var">endpoint</var> - a previously connected endpoint string to disconnect.
</p>
<h4 class="subsubheading" id="Outputs-6">Outputs</h4>
<p><var class="var">status</var> - status for disconnect.
On success, disconnect will return a <var class="var">status</var> of true 
</p>
<p><strong class="strong">See also:</strong> zmq_socket, zmq_connect.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005ferrno">
<h4 class="subsection">4.1.8 zmq_errno</h4>
<a class="index-entry-id" id="index-zmq_005ferrno"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-_003d"><span class="category-def">: </span><span><code class="def-type"><var class="var">errornum</var></code> <strong class="def-name">=</strong> <code class="def-code-arguments">zmq_errno ()</code><a class="copiable-link" href='#index-_003d'></a></span></dt>
<dd>
<p>Get the value of errno from zeromq.
</p>
<h4 class="subsubheading" id="Inputs-7">Inputs</h4>
<p>None
</p><h4 class="subsubheading" id="Outputs-7">Outputs</h4>
<p><var class="var">errornum</var> is the errno value of the calling thread.
</p>
</dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fgetsockopt">
<h4 class="subsection">4.1.9 zmq_getsockopt</h4>
<a class="index-entry-id" id="index-zmq_005fgetsockopt"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fgetsockopt-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">value</var> =</code> <strong class="def-name">zmq_getsockopt</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">optionid</var>)</code><a class="copiable-link" href='#index-zmq_005fgetsockopt-1'></a></span></dt>
<dd>
<p>Get the current value of an option.
</p>
<h4 class="subsubheading" id="Inputs-8">Inputs</h4>
<p><var class="var">sock</var> - the socket to connect.
</p>
<p><var class="var">optionid</var> - the setsockopt option to set.
</p>
<p>Valid <var class="var">optionid</var>s are:
</p><dl class="table">
<dt><code class="code">ZMQ_RCVMORE</code></dt>
<dd><p>Flag for whether a message has been split into multiple messages. The return value will be either 0 or 1.
</p></dd>
<dt><code class="code">ZMQ_TYPE</code></dt>
<dd><p>Socket type for zeromq socket created with zmq_socket.
Valid types are the same as the socket type value specified with zmq_socket. 
</p></dd>
<dt><code class="code">ZMQ_EVENTS</code></dt>
<dd><p>Get the event state of zeromq socket.
The returned value is a bit mask that may contain the following set values:
</p><ul class="itemize mark-bullet">
<li><code class="code">ZMQ_POLLIN</code> set when at least one message is available to read and zmq_recv will not block.
</li><li><code class="code">ZMQ_POLLOUT</code> set when at least one message can be written without zmq_send blocking.
</li></ul>
</dd>
<dt><code class="code">ZMQ_IDENTITY</code> or <code class="code">ZMQ_ROUTING_ID</code></dt>
<dd><p>Get the socket identity value
</p></dd>
<dt><code class="code">ZMQ_RATE</code></dt>
<dd><p>Get the multicast data rate
</p></dd>
<dt><code class="code">ZMQ_PRIORITY</code></dt>
<dd><p>Get socket priority (linux only)
</p></dd>
<dt><code class="code">ZMQ_BACKLOG</code></dt>
<dd><p>Get length of queue for pending connections
</p></dd>
<dt><code class="code">ZMQ_LAST_ENDPOINT</code></dt>
<dd><p>Get the last endpoint the socket was connected to
</p></dd>
<dt><code class="code">ZMQ_CONNECT_TIMEOUT</code></dt>
<dd><p>Get the connect timeout value
</p></dd>
<dt><code class="code">ZMQ_SOCKS_PROXY</code></dt>
<dd><p>Get the SOCKS5 proxy value (string)
</p></dd>
<dt><code class="code">ZMQ_CURVE_SERVER</code></dt>
<dd><p>Get whether socket is a curve server (1) or not (0)
</p></dd>
<dt><code class="code">ZMQ_CURVE_PRIVATEKEY</code></dt>
<dd><p>Get a the curve socket private key (string)
</p></dd>
<dt><code class="code">ZMQ_CURVE_PUBLICKEY</code></dt>
<dd><p>Get a the curve socket public key (string)
</p></dd>
<dt><code class="code">ZMQ_CURVE_SERVERKEY</code></dt>
<dd><p>Get a the curve socket public key (string)
</p></dd>
<dt><code class="code">ZMQ_PLAIN_SERVER</code></dt>
<dd><p>Get whether socket server will use plain authentication (1) or not (0)
</p></dd>
<dt><code class="code">ZMQ_PLAIN_USERNAME</code></dt>
<dd><p>Get the plain socket username (string)
</p></dd>
<dt><code class="code">ZMQ_PLAIN_PASSWORD</code></dt>
<dd><p>Get the plain socket password (string)
</p></dd>
<dt><code class="code">ZMQ_GSSAPI_SERVER</code></dt>
<dd><p>Get whether socket server will use gssapi authentication (1) or not (0)
</p></dd>
<dt><code class="code">ZMQ_GSSAPI_PLAINTEXT</code></dt>
<dd><p>Get whether socket will encrypt gssapi authentication (1) or not (0)
</p></dd>
<dt><code class="code">ZMQ_GSSAPI_PRINCIPAL</code></dt>
<dd><p>Get the name of the gssapi principal (string)
</p></dd>
<dt><code class="code">ZMQ_GSSAPI_SERVICE_PRINCIPAL</code></dt>
<dd><p>Get the name of the gssapi service principal (string)
</p></dd>
<dt><code class="code">ZMQ_MECHANISM</code></dt>
<dd><p>Get the security mechanism (ZMQ_NULL, ZMQ_PLAIN, ZMQ_CURVE, ZMQ_GSSAPI)
</p></dd>
</dl>
<h4 class="subsubheading" id="Outputs-8">Outputs</h4>
<p><var class="var">value</var> - the value set for the option, or [].
</p>
<p><strong class="strong">See also:</strong> zmq_socket, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fhas">
<h4 class="subsection">4.1.10 zmq_has</h4>
<a class="index-entry-id" id="index-zmq_005fhas"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fhas-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">yesno</var> =</code> <strong class="def-name">zmq_has</strong> <code class="def-code-arguments">(<var class="var">feature</var>)</code><a class="copiable-link" href='#index-zmq_005fhas-1'></a></span></dt>
<dd>
<p>Check if the zmq library supports a given feature.
</p>
<h4 class="subsubheading" id="Inputs-9">Inputs</h4>
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
<h4 class="subsubheading" id="Outputs-9">Outputs</h4>
<p><var class="var">yesno</var> - set to true if the feature is available, otherwise false.
</p>
</dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fpoll">
<h4 class="subsection">4.1.11 zmq_poll</h4>
<a class="index-entry-id" id="index-zmq_005fpoll"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fpoll-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">havedata</var> =</code> <strong class="def-name">zmq_poll</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">timeout</var>)</code><a class="copiable-link" href='#index-zmq_005fpoll-1'></a></span></dt>
<dt class="deftypefnx def-cmd-deftypefn" id="index-zmq_005fpoll-2"><span class="category-def">: </span><span><code class="def-type"><var class="var">indexlist</var> =</code> <strong class="def-name">zmq_poll</strong> <code class="def-code-arguments">(<var class="var">socklist</var>, <var class="var">timeout</var>)</code><a class="copiable-link" href='#index-zmq_005fpoll-2'></a></span></dt>
<dd>
<p>Wait up to timeout time for received data on socket.
</p>
<h4 class="subsubheading" id="Inputs-10">Inputs</h4>
<p><var class="var">sock</var> - the socket to wait on.
</p>
<p><var class="var">socklist</var> - the array of sockets to wait on.
</p>
<p><var class="var">timeout</var> - timeout time in milliseconds.
A value of 0 will return without waiting. A value of -1 will wait until there is data.
</p>
<h4 class="subsubheading" id="Outputs-10">Outputs</h4>
<p><var class="var">havedata</var> - value of 1 if have data.
</p>
<p><var class="var">indexlist</var> - cell array of indexes to sockets that have data.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p>
</dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005frecv">
<h4 class="subsection">4.1.12 zmq_recv</h4>
<a class="index-entry-id" id="index-zmq_005frecv"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005frecv-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">data</var> =</code> <strong class="def-name">zmq_recv</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">len</var>)</code><a class="copiable-link" href='#index-zmq_005frecv-1'></a></span></dt>
<dt class="deftypefnx def-cmd-deftypefn" id="index-zmq_005frecv-2"><span class="category-def">: </span><span><code class="def-type"><var class="var">data</var> =</code> <strong class="def-name">zmq_recv</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">len</var>, <var class="var">flags</var>)</code><a class="copiable-link" href='#index-zmq_005frecv-2'></a></span></dt>
<dd>
<p>Attempt to receive up to <var class="var">len</var> bytes of data from  zeromq socket.
</p>
<h4 class="subsubheading" id="Inputs-11">Inputs</h4>
<p><var class="var">sock</var> - the socket to receive from.
</p>
<p><var class="var">len</var> - number of bytes to read.
</p>
<p><var class="var">flags</var> - optional flags to pass to recv
</p>
<h4 class="subsubheading" id="Outputs-11">Outputs</h4>
<p><var class="var">data</var> - the read data in an uint8 array.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fsend">
<h4 class="subsection">4.1.13 zmq_send</h4>
<a class="index-entry-id" id="index-zmq_005fsend"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fsend-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">count</var> =</code> <strong class="def-name">zmq_send</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">data</var>)</code><a class="copiable-link" href='#index-zmq_005fsend-1'></a></span></dt>
<dt class="deftypefnx def-cmd-deftypefn" id="index-zmq_005fsend-2"><span class="category-def">: </span><span><code class="def-type"><var class="var">count</var> =</code> <strong class="def-name">zmq_send</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">data</var>, <var class="var">flags</var>)</code><a class="copiable-link" href='#index-zmq_005fsend-2'></a></span></dt>
<dd>
<p>Attempt to send to <var class="var">data</var> bytes of data to zeromq socket.
</p>
<h4 class="subsubheading" id="Inputs-12">Inputs</h4>
<p><var class="var">sock</var> - the socket to receive from.
</p>
<p><var class="var">data</var> - data to send - either string or uint8 type.
</p>
<p><var class="var">flags</var> - optional flags to pass to send
</p>
<h4 class="subsubheading" id="Outputs-12">Outputs</h4>
<p><var class="var">count</var> - number of bytes written to socket, or -1 on error.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fsetsockopt">
<h4 class="subsection">4.1.14 zmq_setsockopt</h4>
<a class="index-entry-id" id="index-zmq_005fsetsockopt"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fsetsockopt-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">status</var> =</code> <strong class="def-name">zmq_setsockopt</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">optionid</var>, <var class="var">value</var>)</code><a class="copiable-link" href='#index-zmq_005fsetsockopt-1'></a></span></dt>
<dd>
<p>Set a socket option on a zeromq socket.
</p>
<h4 class="subsubheading" id="Inputs-13">Inputs</h4>
<p><var class="var">sock</var> - the socket to connect.
</p>
<p><var class="var">optionid</var> - the setsockopt option to set.
</p>
<p><var class="var">value</var> - the value to set.
</p>
<p>Known valid <var class="var">optionid</var>s are:
</p><dl class="table">
<dt><code class="code">ZMQ_SUBSCRIBE</code></dt>
<dd><p>Subscribe to incoming messages matching the value. The value is either a string or a uint8 array that
must match the start of any incoming message
</p></dd>
<dt><code class="code">ZMQ_UNSUBSCRIBE</code></dt>
<dd><p>Unsubscribe from incoming messages
</p></dd>
<dt><code class="code">ZMQ_CONNECT_TIMEOUT</code></dt>
<dd><p>Set timeout for connect calls
</p></dd>
<dt><code class="code">ZMQ_IDENTITY</code> or <code class="code">ZMQ_ROUTING_ID</code></dt>
<dd><p>Set the identity of a socket (string or uint8 data)
</p></dd>
<dt><code class="code">ZMQ_RATE</code></dt>
<dd><p>Set the multicast data rate
</p></dd>
<dt><code class="code">ZMQ_PRIORITY</code></dt>
<dd><p>Set the socket priority (linux only)
</p></dd>
<dt><code class="code">ZMQ_BACKLOG</code></dt>
<dd><p>Set the queue length for incoming connections
</p></dd>
<dt><code class="code">ZMQ_SOCKS_PROXY</code></dt>
<dd><p>Set the socks5 proxy value (string)
</p></dd>
<dt><code class="code">ZMQ_CURVE_SERVER</code></dt>
<dd><p>Set whether socket is a curve server (1) or not (0)
</p></dd>
<dt><code class="code">ZMQ_CURVE_PRIVATEKEY</code></dt>
<dd><p>Set the curve socket private key (string)
</p></dd>
<dt><code class="code">ZMQ_CURVE_PUBLICKEY</code></dt>
<dd><p>Set the curve socket public key (string)
</p></dd>
<dt><code class="code">ZMQ_CURVE_SERVERKEY</code></dt>
<dd><p>Set the curve socket public key (string)
</p></dd>
<dt><code class="code">ZMQ_PLAIN_SERVER</code></dt>
<dd><p>Set whether socket server will use plain authentication (1) or not (0)
</p></dd>
<dt><code class="code">ZMQ_PLAIN_USERNAME</code></dt>
<dd><p>Set the plain socket username (string)
</p></dd>
<dt><code class="code">ZMQ_PLAIN_PASSWORD</code></dt>
<dd><p>Set the plain socket password (string)
</p></dd>
<dt><code class="code">ZMQ_GSSAPI_SERVER</code></dt>
<dd><p>Set whether socket server will use gssapi authentication (1) or not (0)
</p></dd>
<dt><code class="code">ZMQ_GSSAPI_PLAINTEXT</code></dt>
<dd><p>Set whether socket will encrypt gssapi authentication (1) or not (0)
</p></dd>
<dt><code class="code">ZMQ_GSSAPI_PRINCIPAL</code></dt>
<dd><p>Set the name of the gssapi principal (string)
</p></dd>
<dt><code class="code">ZMQ_GSSAPI_SERVICE_PRINCIPAL</code></dt>
<dd><p>Set the name of the gssapi service principal (string)
</p></dd>
</dl>
<h4 class="subsubheading" id="Outputs-13">Outputs</h4>
<p><var class="var">status</var> - status for setsockopt.
On success, setsockopt will return <var class="var">status</var> of true 
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, ZMQ_SUBSCRIBE, ZMQ_UNSUBSCRIBE, ZMQ_CONNECT_TIMEOUT.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fsocket">
<h4 class="subsection">4.1.15 zmq_socket</h4>
<a class="index-entry-id" id="index-zmq_005fsocket"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fsocket-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">sock</var> =</code> <strong class="def-name">zmq_socket</strong> <code class="def-code-arguments">(<var class="var">type</var>)</code><a class="copiable-link" href='#index-zmq_005fsocket-1'></a></span></dt>
<dd>
<p>Create a zeromq socket.
</p>
<h4 class="subsubheading" id="Inputs-14">Inputs</h4>
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
<h4 class="subsubheading" id="Outputs-14">Outputs</h4>
<p><var class="var">sock</var> - an instance of <var class="var">octave_zeromq_socket</var> class.
</p>
<p><strong class="strong">See also:</strong> ZMQ_PUB, ZMQ_SUB, ZMQ_PUSH, ZMQ_PULL, ZMQ_REQ, ZMQ_REP, ZMQ_PAIR, ZMQ_DEALER, ZMQ_ROUTER, ZMQ_XPUB, ZMQ_XSUB, ZMQ_STREAM.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fstrerror">
<h4 class="subsection">4.1.16 zmq_strerror</h4>
<a class="index-entry-id" id="index-zmq_005fstrerror"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fstrerror-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">errorstr</var> =</code> <strong class="def-name">zmq_strerror</strong> <code class="def-code-arguments">()</code><a class="copiable-link" href='#index-zmq_005fstrerror-1'></a></span></dt>
<dd>
<p>Get the last error from zeromq.
</p>
<h4 class="subsubheading" id="Inputs-15">Inputs</h4>
<p>None
</p><h4 class="subsubheading" id="Outputs-15">Outputs</h4>
<p><var class="var">errorstr</var> - a string representation of the last error
</p>
</dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005funbind">
<h4 class="subsection">4.1.17 zmq_unbind</h4>
<a class="index-entry-id" id="index-zmq_005funbind"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005funbind-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">status</var> =</code> <strong class="def-name">zmq_unbind</strong> <code class="def-code-arguments">(<var class="var">sock</var>, <var class="var">endpoint</var>)</code><a class="copiable-link" href='#index-zmq_005funbind-1'></a></span></dt>
<dd>
<p>Unbind a previously bound zeromq socket from a endpoint.
</p>
<h4 class="subsubheading" id="Inputs-16">Inputs</h4>
<p><var class="var">sock</var> - the socket to unbind.
</p>
<p><var class="var">endpoint</var> - the endpoint string to unbind.
</p>
<h4 class="subsubheading" id="Outputs-16">Outputs</h4>
<p><var class="var">status</var> - status for unbind.
On success, unbind will return a <var class="var">status</var> of true 
</p>
<p><strong class="strong">See also:</strong> zmq_socket, zmq_bind .
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fversion">
<h4 class="subsection">4.1.18 zmq_version</h4>
<a class="index-entry-id" id="index-zmq_005fversion"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fversion-1"><span class="category-def">: </span><span><code class="def-type">[<var class="var">major</var>, <var class="var">minor</var>, <var class="var">patch</var>] =</code> <strong class="def-name">zmq_version</strong> <code class="def-code-arguments">()</code><a class="copiable-link" href='#index-zmq_005fversion-1'></a></span></dt>
<dd>
<p>Get the ZeroMQ library version.
</p>
<h4 class="subsubheading" id="Inputs-17">Inputs</h4>
<p>None
</p><h4 class="subsubheading" id="Outputs-17">Outputs</h4>
<p><var class="var">major</var>, <var class="var">minor</var> <var class="var">patch</var> - version of the ZeroMQ library.
</p>
</dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fz85_005fdecode">
<h4 class="subsection">4.1.19 zmq_z85_decode</h4>
<a class="index-entry-id" id="index-zmq_005fz85_005fdecode"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fz85_005fdecode-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">data</var> =</code> <strong class="def-name">zmq_z85_decode</strong> <code class="def-code-arguments">(<var class="var">instr</var>)</code><a class="copiable-link" href='#index-zmq_005fz85_005fdecode-1'></a></span></dt>
<dd>
<p>Decode a z85 encoded string to a binary key.
</p>
<h4 class="subsubheading" id="Inputs-18">Inputs</h4>
<p><var class="var">instr</var> - a string encoded data
</p>
<h4 class="subsubheading" id="Outputs-18">Outputs</h4>
<p><var class="var">data</var> - uint8 decoded data
</p>
</dd></dl>
</div>
<div class="subsection-level-extent" id="zmq_005fz85_005fencode">
<h4 class="subsection">4.1.20 zmq_z85_encode</h4>
<a class="index-entry-id" id="index-zmq_005fz85_005fencode"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-zmq_005fz85_005fencode-1"><span class="category-def">: </span><span><code class="def-type"><var class="var">dest</var> =</code> <strong class="def-name">zmq_z85_encode</strong> <code class="def-code-arguments">(<var class="var">data</var>)</code><a class="copiable-link" href='#index-zmq_005fz85_005fencode-1'></a></span></dt>
<dd>
<p>Encode a binary key as Z85 printable text.
</p>
<h4 class="subsubheading" id="Inputs-19">Inputs</h4>
<p><var class="var">data</var> - uint8 data that must have a size divisible by 4.
</p>
<h4 class="subsubheading" id="Outputs-19">Outputs</h4>
<p><var class="var">dest</var> - string encoded data
</p>
</dd></dl>
<hr>
</div>
</div>
<div class="section-level-extent" id="ZeroMQ-socket-type-constants">
<div class="nav-panel">
<p>
Next: <a href="#ZeroMQ-get_002fsetsockopt-constants" accesskey="n" rel="next">ZeroMQ get/setsockopt constants</a>, Previous: <a href="#ZeroMQ-functions" accesskey="p" rel="prev">ZeroMQ functions</a>, Up: <a href="#Function-Reference" accesskey="u" rel="up">Function Reference</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h3 class="section" id="ZeroMQ-socket-type-constants-1">4.2 ZeroMQ socket type constants</h3>
<a class="index-entry-id" id="index-ZeroMQ-socket-type-constants"></a>
<ul class="mini-toc">
<li><a href="#ZMQ_005fDEALER" accesskey="1">ZMQ_DEALER</a></li>
<li><a href="#ZMQ_005fPAIR" accesskey="2">ZMQ_PAIR</a></li>
<li><a href="#ZMQ_005fPUB" accesskey="3">ZMQ_PUB</a></li>
<li><a href="#ZMQ_005fPULL" accesskey="4">ZMQ_PULL</a></li>
<li><a href="#ZMQ_005fPUSH" accesskey="5">ZMQ_PUSH</a></li>
<li><a href="#ZMQ_005fREP" accesskey="6">ZMQ_REP</a></li>
<li><a href="#ZMQ_005fREQ" accesskey="7">ZMQ_REQ</a></li>
<li><a href="#ZMQ_005fROUTER" accesskey="8">ZMQ_ROUTER</a></li>
<li><a href="#ZMQ_005fSTREAM" accesskey="9">ZMQ_STREAM</a></li>
<li><a href="#ZMQ_005fSUB">ZMQ_SUB</a></li>
<li><a href="#ZMQ_005fXPUB">ZMQ_XPUB</a></li>
<li><a href="#ZMQ_005fXSUB">ZMQ_XSUB</a></li>
</ul>
<div class="subsection-level-extent" id="ZMQ_005fDEALER">
<h4 class="subsection">4.2.1 ZMQ_DEALER</h4>
<a class="index-entry-id" id="index-ZMQ_005fDEALER"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fDEALER-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_DEALER</strong><a class="copiable-link" href='#index-ZMQ_005fDEALER-1'></a></span></dt>
<dd>
<p>Constant for dealer socket type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPAIR">
<h4 class="subsection">4.2.2 ZMQ_PAIR</h4>
<a class="index-entry-id" id="index-ZMQ_005fPAIR"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPAIR-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PAIR</strong><a class="copiable-link" href='#index-ZMQ_005fPAIR-1'></a></span></dt>
<dd>
<p>Constant for pair socket type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPUB">
<h4 class="subsection">4.2.3 ZMQ_PUB</h4>
<a class="index-entry-id" id="index-ZMQ_005fPUB"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPUB-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PUB</strong><a class="copiable-link" href='#index-ZMQ_005fPUB-1'></a></span></dt>
<dd>
<p>Constant for publisher type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPULL">
<h4 class="subsection">4.2.4 ZMQ_PULL</h4>
<a class="index-entry-id" id="index-ZMQ_005fPULL"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPULL-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PULL</strong><a class="copiable-link" href='#index-ZMQ_005fPULL-1'></a></span></dt>
<dd>
<p>Constant for pull socket type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPUSH">
<h4 class="subsection">4.2.5 ZMQ_PUSH</h4>
<a class="index-entry-id" id="index-ZMQ_005fPUSH"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPUSH-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PUSH</strong><a class="copiable-link" href='#index-ZMQ_005fPUSH-1'></a></span></dt>
<dd>
<p>Constant for push socket type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fREP">
<h4 class="subsection">4.2.6 ZMQ_REP</h4>
<a class="index-entry-id" id="index-ZMQ_005fREP"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fREP-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_REP</strong><a class="copiable-link" href='#index-ZMQ_005fREP-1'></a></span></dt>
<dd>
<p>Constant for reply socket type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fREQ">
<h4 class="subsection">4.2.7 ZMQ_REQ</h4>
<a class="index-entry-id" id="index-ZMQ_005fREQ"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fREQ-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_REQ</strong><a class="copiable-link" href='#index-ZMQ_005fREQ-1'></a></span></dt>
<dd>
<p>Constant for request socket type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fROUTER">
<h4 class="subsection">4.2.8 ZMQ_ROUTER</h4>
<a class="index-entry-id" id="index-ZMQ_005fROUTER"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fROUTER-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_ROUTER</strong><a class="copiable-link" href='#index-ZMQ_005fROUTER-1'></a></span></dt>
<dd>
<p>Constant for router socket type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fSTREAM">
<h4 class="subsection">4.2.9 ZMQ_STREAM</h4>
<a class="index-entry-id" id="index-ZMQ_005fSTREAM"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fSTREAM-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_STREAM</strong><a class="copiable-link" href='#index-ZMQ_005fSTREAM-1'></a></span></dt>
<dd>
<p>Constant for stream socket type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fSUB">
<h4 class="subsection">4.2.10 ZMQ_SUB</h4>
<a class="index-entry-id" id="index-ZMQ_005fSUB"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fSUB-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_SUB</strong><a class="copiable-link" href='#index-ZMQ_005fSUB-1'></a></span></dt>
<dd>
<p>Constant for subscriber type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fXPUB">
<h4 class="subsection">4.2.11 ZMQ_XPUB</h4>
<a class="index-entry-id" id="index-ZMQ_005fXPUB"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fXPUB-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_XPUB</strong><a class="copiable-link" href='#index-ZMQ_005fXPUB-1'></a></span></dt>
<dd>
<p>Constant for publisher type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fXSUB">
<h4 class="subsection">4.2.12 ZMQ_XSUB</h4>
<a class="index-entry-id" id="index-ZMQ_005fXSUB"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fXSUB-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_XSUB</strong><a class="copiable-link" href='#index-ZMQ_005fXSUB-1'></a></span></dt>
<dd>
<p>Constant for subscriber type.
</p>
<p><strong class="strong">See also:</strong> zmq_socket.
</p></dd></dl>
<hr>
</div>
</div>
<div class="section-level-extent" id="ZeroMQ-get_002fsetsockopt-constants">
<div class="nav-panel">
<p>
Next: <a href="#ZeroMQ-ZMQ_005fEVENTS-flags" accesskey="n" rel="next">ZeroMQ ZMQ_EVENTS flags</a>, Previous: <a href="#ZeroMQ-socket-type-constants" accesskey="p" rel="prev">ZeroMQ socket type constants</a>, Up: <a href="#Function-Reference" accesskey="u" rel="up">Function Reference</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h3 class="section" id="ZeroMQ-get_002fsetsockopt-constants-1">4.3 ZeroMQ get/setsockopt constants</h3>
<a class="index-entry-id" id="index-ZeroMQ-get_002fsetsockopt-constants"></a>
<ul class="mini-toc">
<li><a href="#ZMQ_005fBACKLOG" accesskey="1">ZMQ_BACKLOG</a></li>
<li><a href="#ZMQ_005fCONNECT_005fTIMEOUT" accesskey="2">ZMQ_CONNECT_TIMEOUT</a></li>
<li><a href="#ZMQ_005fCURVE_005fPUBLICKEY" accesskey="3">ZMQ_CURVE_PUBLICKEY</a></li>
<li><a href="#ZMQ_005fCURVE_005fSECRETKEY" accesskey="4">ZMQ_CURVE_SECRETKEY</a></li>
<li><a href="#ZMQ_005fCURVE_005fSERVER" accesskey="5">ZMQ_CURVE_SERVER</a></li>
<li><a href="#ZMQ_005fCURVE_005fSERVERKEY" accesskey="6">ZMQ_CURVE_SERVERKEY</a></li>
<li><a href="#ZMQ_005fEVENTS" accesskey="7">ZMQ_EVENTS</a></li>
<li><a href="#ZMQ_005fGSSAPI_005fPLAINTEXT" accesskey="8">ZMQ_GSSAPI_PLAINTEXT</a></li>
<li><a href="#ZMQ_005fGSSAPI_005fPRINCIPAL" accesskey="9">ZMQ_GSSAPI_PRINCIPAL</a></li>
<li><a href="#ZMQ_005fGSSAPI_005fSERVER">ZMQ_GSSAPI_SERVER</a></li>
<li><a href="#ZMQ_005fGSSAPI_005fSERVICE_005fPRINCIPAL">ZMQ_GSSAPI_SERVICE_PRINCIPAL</a></li>
<li><a href="#ZMQ_005fIDENTITY">ZMQ_IDENTITY</a></li>
<li><a href="#ZMQ_005fLAST_005fENDPOINT">ZMQ_LAST_ENDPOINT</a></li>
<li><a href="#ZMQ_005fMECHANISM">ZMQ_MECHANISM</a></li>
<li><a href="#ZMQ_005fPLAIN_005fPASSWORD">ZMQ_PLAIN_PASSWORD</a></li>
<li><a href="#ZMQ_005fPLAIN_005fSERVER">ZMQ_PLAIN_SERVER</a></li>
<li><a href="#ZMQ_005fPLAIN_005fUSERNAME">ZMQ_PLAIN_USERNAME</a></li>
<li><a href="#ZMQ_005fPRIORITY">ZMQ_PRIORITY</a></li>
<li><a href="#ZMQ_005fRATE">ZMQ_RATE</a></li>
<li><a href="#ZMQ_005fRCVMORE">ZMQ_RCVMORE</a></li>
<li><a href="#ZMQ_005fROUTING_005fID">ZMQ_ROUTING_ID</a></li>
<li><a href="#ZMQ_005fSOCKS_005fPROXY">ZMQ_SOCKS_PROXY</a></li>
<li><a href="#ZMQ_005fSUBSCRIBE">ZMQ_SUBSCRIBE</a></li>
<li><a href="#ZMQ_005fTYPE">ZMQ_TYPE</a></li>
<li><a href="#ZMQ_005fUNSUBSCRIBE">ZMQ_UNSUBSCRIBE</a></li>
</ul>
<div class="subsection-level-extent" id="ZMQ_005fBACKLOG">
<h4 class="subsection">4.3.1 ZMQ_BACKLOG</h4>
<a class="index-entry-id" id="index-ZMQ_005fBACKLOG"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fBACKLOG-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_BACKLOG</strong><a class="copiable-link" href='#index-ZMQ_005fBACKLOG-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt to set backlog for pending connections
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fCONNECT_005fTIMEOUT">
<h4 class="subsection">4.3.2 ZMQ_CONNECT_TIMEOUT</h4>
<a class="index-entry-id" id="index-ZMQ_005fCONNECT_005fTIMEOUT"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fCONNECT_005fTIMEOUT-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_CONNECT_TIMEOUT</strong><a class="copiable-link" href='#index-ZMQ_005fCONNECT_005fTIMEOUT-1'></a></span></dt>
<dd>
<p>Constant for get/setsockopt connect timeout value
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fCURVE_005fPUBLICKEY">
<h4 class="subsection">4.3.3 ZMQ_CURVE_PUBLICKEY</h4>
<a class="index-entry-id" id="index-ZMQ_005fCURVE_005fPUBLICKEY"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fCURVE_005fPUBLICKEY-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_CURVE_PUBLICKEY</strong><a class="copiable-link" href='#index-ZMQ_005fCURVE_005fPUBLICKEY-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt CURVE_PUBLICKEY value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fCURVE_005fSECRETKEY">
<h4 class="subsection">4.3.4 ZMQ_CURVE_SECRETKEY</h4>
<a class="index-entry-id" id="index-ZMQ_005fCURVE_005fSECRETKEY"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fCURVE_005fPRIVATEKEY"><span class="category-def">: </span><span><strong class="def-name">ZMQ_CURVE_PRIVATEKEY</strong><a class="copiable-link" href='#index-ZMQ_005fCURVE_005fPRIVATEKEY'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt CURVE_PRIVATEKEY value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fCURVE_005fSERVER">
<h4 class="subsection">4.3.5 ZMQ_CURVE_SERVER</h4>
<a class="index-entry-id" id="index-ZMQ_005fCURVE_005fSERVER"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fCURVE_005fSERVER-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_CURVE_SERVER</strong><a class="copiable-link" href='#index-ZMQ_005fCURVE_005fSERVER-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt CURVE_SERVER value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fCURVE_005fSERVERKEY">
<h4 class="subsection">4.3.6 ZMQ_CURVE_SERVERKEY</h4>
<a class="index-entry-id" id="index-ZMQ_005fCURVE_005fSERVERKEY"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fCURVE_005fSERVERKEY-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_CURVE_SERVERKEY</strong><a class="copiable-link" href='#index-ZMQ_005fCURVE_005fSERVERKEY-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt CURVE_SERVERKEY value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fEVENTS">
<h4 class="subsection">4.3.7 ZMQ_EVENTS</h4>
<a class="index-entry-id" id="index-ZMQ_005fEVENTS"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fEVENTS-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_EVENTS</strong><a class="copiable-link" href='#index-ZMQ_005fEVENTS-1'></a></span></dt>
<dd>
<p>Constant for getsockopt EVENTS value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fGSSAPI_005fPLAINTEXT">
<h4 class="subsection">4.3.8 ZMQ_GSSAPI_PLAINTEXT</h4>
<a class="index-entry-id" id="index-ZMQ_005fGSSAPI_005fPLAINTEXT"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fGSSAPI_005fPLAINTEXT-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_GSSAPI_PLAINTEXT</strong><a class="copiable-link" href='#index-ZMQ_005fGSSAPI_005fPLAINTEXT-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt GSSAPI_PLAINTEXT value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fGSSAPI_005fPRINCIPAL">
<h4 class="subsection">4.3.9 ZMQ_GSSAPI_PRINCIPAL</h4>
<a class="index-entry-id" id="index-ZMQ_005fGSSAPI_005fPRINCIPAL"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fGSSAPI_005fPRINCIPAL-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_GSSAPI_PRINCIPAL</strong><a class="copiable-link" href='#index-ZMQ_005fGSSAPI_005fPRINCIPAL-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt GSSAPI_PRINCIPAL value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fGSSAPI_005fSERVER">
<h4 class="subsection">4.3.10 ZMQ_GSSAPI_SERVER</h4>
<a class="index-entry-id" id="index-ZMQ_005fGSSAPI_005fSERVER"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fGSSAPI_005fSERVER-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_GSSAPI_SERVER</strong><a class="copiable-link" href='#index-ZMQ_005fGSSAPI_005fSERVER-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt GSSAPI_SERVER value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fGSSAPI_005fSERVICE_005fPRINCIPAL">
<h4 class="subsection">4.3.11 ZMQ_GSSAPI_SERVICE_PRINCIPAL</h4>
<a class="index-entry-id" id="index-ZMQ_005fGSSAPI_005fSERVICE_005fPRINCIPAL"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fGSSAPI_005fSERVICE_005fPRINCIPAL-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_GSSAPI_SERVICE_PRINCIPAL</strong><a class="copiable-link" href='#index-ZMQ_005fGSSAPI_005fSERVICE_005fPRINCIPAL-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt GSSAPI_SERVICE_PRINCIPAL value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fIDENTITY">
<h4 class="subsection">4.3.12 ZMQ_IDENTITY</h4>
<a class="index-entry-id" id="index-ZMQ_005fIDENTITY"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fIDENITY"><span class="category-def">: </span><span><strong class="def-name">ZMQ_IDENITY</strong><a class="copiable-link" href='#index-ZMQ_005fIDENITY'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt IDENTITY value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fLAST_005fENDPOINT">
<h4 class="subsection">4.3.13 ZMQ_LAST_ENDPOINT</h4>
<a class="index-entry-id" id="index-ZMQ_005fLAST_005fENDPOINT"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fLAST_005fENDPOINT-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_LAST_ENDPOINT</strong><a class="copiable-link" href='#index-ZMQ_005fLAST_005fENDPOINT-1'></a></span></dt>
<dd>
<p>Constant for getsockopt last endpoint value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fMECHANISM">
<h4 class="subsection">4.3.14 ZMQ_MECHANISM</h4>
<a class="index-entry-id" id="index-ZMQ_005fMECHANISM"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fMECHANISM-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_MECHANISM</strong><a class="copiable-link" href='#index-ZMQ_005fMECHANISM-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt MECHANISM value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPLAIN_005fPASSWORD">
<h4 class="subsection">4.3.15 ZMQ_PLAIN_PASSWORD</h4>
<a class="index-entry-id" id="index-ZMQ_005fPLAIN_005fPASSWORD"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPLAIN_005fPASSWORD-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PLAIN_PASSWORD</strong><a class="copiable-link" href='#index-ZMQ_005fPLAIN_005fPASSWORD-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt PLAIN_PASSWORD value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPLAIN_005fSERVER">
<h4 class="subsection">4.3.16 ZMQ_PLAIN_SERVER</h4>
<a class="index-entry-id" id="index-ZMQ_005fPLAIN_005fSERVER"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPLAIN_005fSERVER-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PLAIN_SERVER</strong><a class="copiable-link" href='#index-ZMQ_005fPLAIN_005fSERVER-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt PLAIN_SERVER value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPLAIN_005fUSERNAME">
<h4 class="subsection">4.3.17 ZMQ_PLAIN_USERNAME</h4>
<a class="index-entry-id" id="index-ZMQ_005fPLAIN_005fUSERNAME"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPLAIN_005fUSERNAME-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PLAIN_USERNAME</strong><a class="copiable-link" href='#index-ZMQ_005fPLAIN_005fUSERNAME-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt PLAIN_USERNAME value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPRIORITY">
<h4 class="subsection">4.3.18 ZMQ_PRIORITY</h4>
<a class="index-entry-id" id="index-ZMQ_005fPRIORITY"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPRIORITY-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PRIORITY</strong><a class="copiable-link" href='#index-ZMQ_005fPRIORITY-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt SO_PRIORITY value option
 in linux only.
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fRATE">
<h4 class="subsection">4.3.19 ZMQ_RATE</h4>
<a class="index-entry-id" id="index-ZMQ_005fRATE"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fRATE-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_RATE</strong><a class="copiable-link" href='#index-ZMQ_005fRATE-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt value option
</p>
<p>Sets the data rate of multicast sockets in kilobits
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fRCVMORE">
<h4 class="subsection">4.3.20 ZMQ_RCVMORE</h4>
<a class="index-entry-id" id="index-ZMQ_005fRCVMORE"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fRCVMORE-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_RCVMORE</strong><a class="copiable-link" href='#index-ZMQ_005fRCVMORE-1'></a></span></dt>
<dd>
<p>Constant for getsockopt RCVMORE value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fROUTING_005fID">
<h4 class="subsection">4.3.21 ZMQ_ROUTING_ID</h4>
<a class="index-entry-id" id="index-ZMQ_005fROUTING_005fID"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fROUTING_005fID-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_ROUTING_ID</strong><a class="copiable-link" href='#index-ZMQ_005fROUTING_005fID-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt IDENTITY value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fSOCKS_005fPROXY">
<h4 class="subsection">4.3.22 ZMQ_SOCKS_PROXY</h4>
<a class="index-entry-id" id="index-ZMQ_005fSOCKS_005fPROXY"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fSOCKS_005fPROXY-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_SOCKS_PROXY</strong><a class="copiable-link" href='#index-ZMQ_005fSOCKS_005fPROXY-1'></a></span></dt>
<dd>
<p>Constant for getsockopt and setsockopt SOCKS_PROXY value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt, zmq_setsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fSUBSCRIBE">
<h4 class="subsection">4.3.23 ZMQ_SUBSCRIBE</h4>
<a class="index-entry-id" id="index-ZMQ_005fSUBSCRIBE"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fSUBSCRIBE-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_SUBSCRIBE</strong><a class="copiable-link" href='#index-ZMQ_005fSUBSCRIBE-1'></a></span></dt>
<dd>
<p>Constant for setsockopt subscribe option
</p>
<p><strong class="strong">See also:</strong> zmq_setsockopt, ZMQ_UNSUBSCRIBE.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fTYPE">
<h4 class="subsection">4.3.24 ZMQ_TYPE</h4>
<a class="index-entry-id" id="index-ZMQ_005fTYPE"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fTYPE-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_TYPE</strong><a class="copiable-link" href='#index-ZMQ_005fTYPE-1'></a></span></dt>
<dd>
<p>Constant for getsockopt TYPE value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fUNSUBSCRIBE">
<h4 class="subsection">4.3.25 ZMQ_UNSUBSCRIBE</h4>
<a class="index-entry-id" id="index-ZMQ_005fUNSUBSCRIBE"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fUNSUBSCRIBE-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_UNSUBSCRIBE</strong><a class="copiable-link" href='#index-ZMQ_005fUNSUBSCRIBE-1'></a></span></dt>
<dd>
<p>Constant for setsockopt unsubscribe option
</p>
<p><strong class="strong">See also:</strong> zmq_setsockopt, ZMQ_SUBSCRIBE.
</p></dd></dl>
<hr>
</div>
</div>
<div class="section-level-extent" id="ZeroMQ-ZMQ_005fEVENTS-flags">
<div class="nav-panel">
<p>
Next: <a href="#ZeroMQ-receive-send-options" accesskey="n" rel="next">ZeroMQ receive send options</a>, Previous: <a href="#ZeroMQ-get_002fsetsockopt-constants" accesskey="p" rel="prev">ZeroMQ get/setsockopt constants</a>, Up: <a href="#Function-Reference" accesskey="u" rel="up">Function Reference</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h3 class="section" id="ZeroMQ-ZMQ_005fEVENTS-flags-1">4.4 ZeroMQ ZMQ_EVENTS flags</h3>
<a class="index-entry-id" id="index-ZeroMQ-ZMQ_005fEVENTS-flags"></a>
<ul class="mini-toc">
<li><a href="#ZMQ_005fPOLLIN" accesskey="1">ZMQ_POLLIN</a></li>
<li><a href="#ZMQ_005fPOLLOUT" accesskey="2">ZMQ_POLLOUT</a></li>
</ul>
<div class="subsection-level-extent" id="ZMQ_005fPOLLIN">
<h4 class="subsection">4.4.1 ZMQ_POLLIN</h4>
<a class="index-entry-id" id="index-ZMQ_005fPOLLIN"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPOLLIN-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_POLLIN</strong><a class="copiable-link" href='#index-ZMQ_005fPOLLIN-1'></a></span></dt>
<dd>
<p>Constant bitmask value for getsockopt EVENTS value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPOLLOUT">
<h4 class="subsection">4.4.2 ZMQ_POLLOUT</h4>
<a class="index-entry-id" id="index-ZMQ_005fPOLLOUT"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPOLLOUT-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_POLLOUT</strong><a class="copiable-link" href='#index-ZMQ_005fPOLLOUT-1'></a></span></dt>
<dd>
<p>Constant bitmask value for getsockopt EVENTS value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
<hr>
</div>
</div>
<div class="section-level-extent" id="ZeroMQ-receive-send-options">
<div class="nav-panel">
<p>
Next: <a href="#ZeroMQ-ZMQ_005fMECHANISM-values" accesskey="n" rel="next">ZeroMQ ZMQ_MECHANISM values</a>, Previous: <a href="#ZeroMQ-ZMQ_005fEVENTS-flags" accesskey="p" rel="prev">ZeroMQ ZMQ_EVENTS flags</a>, Up: <a href="#Function-Reference" accesskey="u" rel="up">Function Reference</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h3 class="section" id="ZeroMQ-receive-send-options-1">4.5 ZeroMQ receive send options</h3>
<a class="index-entry-id" id="index-ZeroMQ-receive-send-options"></a>
<ul class="mini-toc">
<li><a href="#ZMQ_005fDONTWAIT" accesskey="1">ZMQ_DONTWAIT</a></li>
<li><a href="#ZMQ_005fSNDMORE" accesskey="2">ZMQ_SNDMORE</a></li>
</ul>
<div class="subsection-level-extent" id="ZMQ_005fDONTWAIT">
<h4 class="subsection">4.5.1 ZMQ_DONTWAIT</h4>
<a class="index-entry-id" id="index-ZMQ_005fDONTWAIT"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fDONTWAIT-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_DONTWAIT</strong><a class="copiable-link" href='#index-ZMQ_005fDONTWAIT-1'></a></span></dt>
<dd>
<p>Constant for recv flag DONTWAIT
</p>
<p><strong class="strong">See also:</strong> zmq_recv.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fSNDMORE">
<h4 class="subsection">4.5.2 ZMQ_SNDMORE</h4>
<a class="index-entry-id" id="index-ZMQ_005fSNDMORE"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fSNDMORE-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_SNDMORE</strong><a class="copiable-link" href='#index-ZMQ_005fSNDMORE-1'></a></span></dt>
<dd>
<p>Constant for send flag SNDMORE
</p>
<p><strong class="strong">See also:</strong> zmq_send.
</p></dd></dl>
<hr>
</div>
</div>
<div class="section-level-extent" id="ZeroMQ-ZMQ_005fMECHANISM-values">
<div class="nav-panel">
<p>
Previous: <a href="#ZeroMQ-receive-send-options" accesskey="p" rel="prev">ZeroMQ receive send options</a>, Up: <a href="#Function-Reference" accesskey="u" rel="up">Function Reference</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h3 class="section" id="ZeroMQ-ZMQ_005fMECHANISM-values-1">4.6 ZeroMQ ZMQ_MECHANISM values</h3>
<a class="index-entry-id" id="index-ZeroMQ-ZMQ_005fMECHANISM-values"></a>
<ul class="mini-toc">
<li><a href="#ZMQ_005fCURVE" accesskey="1">ZMQ_CURVE</a></li>
<li><a href="#ZMQ_005fGSSAPI" accesskey="2">ZMQ_GSSAPI</a></li>
<li><a href="#ZMQ_005fNULL" accesskey="3">ZMQ_NULL</a></li>
<li><a href="#ZMQ_005fPLAIN" accesskey="4">ZMQ_PLAIN</a></li>
</ul>
<div class="subsection-level-extent" id="ZMQ_005fCURVE">
<h4 class="subsection">4.6.1 ZMQ_CURVE</h4>
<a class="index-entry-id" id="index-ZMQ_005fCURVE"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fCURVE-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_CURVE</strong><a class="copiable-link" href='#index-ZMQ_005fCURVE-1'></a></span></dt>
<dd>
<p>Constant value for getsockopt MECHANISM value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fGSSAPI">
<h4 class="subsection">4.6.2 ZMQ_GSSAPI</h4>
<a class="index-entry-id" id="index-ZMQ_005fGSSAPI"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fGSSAPI-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_GSSAPI</strong><a class="copiable-link" href='#index-ZMQ_005fGSSAPI-1'></a></span></dt>
<dd>
<p>Constant value for getsockopt MECHANISM value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fNULL">
<h4 class="subsection">4.6.3 ZMQ_NULL</h4>
<a class="index-entry-id" id="index-ZMQ_005fNULL"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fNULL-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_NULL</strong><a class="copiable-link" href='#index-ZMQ_005fNULL-1'></a></span></dt>
<dd>
<p>Constant value for getsockopt MECHANISM value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
</div>
<div class="subsection-level-extent" id="ZMQ_005fPLAIN">
<h4 class="subsection">4.6.4 ZMQ_PLAIN</h4>
<a class="index-entry-id" id="index-ZMQ_005fPLAIN"></a>
<dl class="first-deftypefn">
<dt class="deftypefn" id="index-ZMQ_005fPLAIN-1"><span class="category-def">: </span><span><strong class="def-name">ZMQ_PLAIN</strong><a class="copiable-link" href='#index-ZMQ_005fPLAIN-1'></a></span></dt>
<dd>
<p>Constant value for getsockopt MECHANISM value option
</p>
<p><strong class="strong">See also:</strong> zmq_getsockopt.
</p></dd></dl>
<hr>
</div>
</div>
</div>
<div class="appendix-level-extent" id="Copying">
<div class="nav-panel">
<p>
Next: <a href="#Index" accesskey="n" rel="next">Index</a>, Previous: <a href="#Function-Reference" accesskey="p" rel="prev">Function Reference</a>, Up: <a href="#Top" accesskey="u" rel="up">Introduction</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h2 class="appendix" id="GNU-General-Public-License">Appendix A GNU General Public License</h2>
<a class="index-entry-id" id="index-warranty"></a>
<a class="index-entry-id" id="index-copyright"></a>
<div class="center">Version 3, 29 June 2007
</div>
<div class="display">
<pre class="display-preformatted">Copyright &copy; 2007 Free Software Foundation, Inc. <a class="url" href="http://fsf.org/">http://fsf.org/</a>
Everyone is permitted to copy and distribute verbatim copies of this
license document, but changing it is not allowed.
</pre></div>
<h3 class="heading" id="Preamble">Preamble</h3>
<p>The GNU General Public License is a free, copyleft license for
software and other kinds of works.
</p>
<p>The licenses for most software and other practical works are designed
to take away your freedom to share and change the works.  By contrast,
the GNU General Public License is intended to guarantee your freedom
to share and change all versions of a program&mdash;to make sure it remains
free software for all its users.  We, the Free Software Foundation,
use the GNU General Public License for most of our software; it
applies also to any other work released this way by its authors.  You
can apply it to your programs, too.
</p>
<p>When we speak of free software, we are referring to freedom, not
price.  Our General Public Licenses are designed to make sure that you
have the freedom to distribute copies of free software (and charge for
them if you wish), that you receive source code or can get it if you
want it, that you can change the software or use pieces of it in new
free programs, and that you know you can do these things.
</p>
<p>To protect your rights, we need to prevent others from denying you
these rights or asking you to surrender the rights.  Therefore, you
have certain responsibilities if you distribute copies of the
software, or if you modify it: responsibilities to respect the freedom
of others.
</p>
<p>For example, if you distribute copies of such a program, whether
gratis or for a fee, you must pass on to the recipients the same
freedoms that you received.  You must make sure that they, too,
receive or can get the source code.  And you must show them these
terms so they know their rights.
</p>
<p>Developers that use the GNU GPL protect your rights with two steps:
(1) assert copyright on the software, and (2) offer you this License
giving you legal permission to copy, distribute and/or modify it.
</p>
<p>For the developers&rsquo; and authors&rsquo; protection, the GPL clearly explains
that there is no warranty for this free software.  For both users&rsquo; and
authors&rsquo; sake, the GPL requires that modified versions be marked as
changed, so that their problems will not be attributed erroneously to
authors of previous versions.
</p>
<p>Some devices are designed to deny users access to install or run
modified versions of the software inside them, although the
manufacturer can do so.  This is fundamentally incompatible with the
aim of protecting users&rsquo; freedom to change the software.  The
systematic pattern of such abuse occurs in the area of products for
individuals to use, which is precisely where it is most unacceptable.
Therefore, we have designed this version of the GPL to prohibit the
practice for those products.  If such problems arise substantially in
other domains, we stand ready to extend this provision to those
domains in future versions of the GPL, as needed to protect the
freedom of users.
</p>
<p>Finally, every program is threatened constantly by software patents.
States should not allow patents to restrict development and use of
software on general-purpose computers, but in those that do, we wish
to avoid the special danger that patents applied to a free program
could make it effectively proprietary.  To prevent this, the GPL
assures that patents cannot be used to render the program non-free.
</p>
<p>The precise terms and conditions for copying, distribution and
modification follow.
</p>
<h3 class="heading" id="TERMS-AND-CONDITIONS">TERMS AND CONDITIONS</h3>
<ol class="enumerate" start="0">
<li> Definitions.
<p>&ldquo;This License&rdquo; refers to version 3 of the GNU General Public License.
</p>
<p>&ldquo;Copyright&rdquo; also means copyright-like laws that apply to other kinds
of works, such as semiconductor masks.
</p>
<p>&ldquo;The Program&rdquo; refers to any copyrightable work licensed under this
License.  Each licensee is addressed as &ldquo;you&rdquo;.  &ldquo;Licensees&rdquo; and
&ldquo;recipients&rdquo; may be individuals or organizations.
</p>
<p>To &ldquo;modify&rdquo; a work means to copy from or adapt all or part of the work
in a fashion requiring copyright permission, other than the making of
an exact copy.  The resulting work is called a &ldquo;modified version&rdquo; of
the earlier work or a work &ldquo;based on&rdquo; the earlier work.
</p>
<p>A &ldquo;covered work&rdquo; means either the unmodified Program or a work based
on the Program.
</p>
<p>To &ldquo;propagate&rdquo; a work means to do anything with it that, without
permission, would make you directly or secondarily liable for
infringement under applicable copyright law, except executing it on a
computer or modifying a private copy.  Propagation includes copying,
distribution (with or without modification), making available to the
public, and in some countries other activities as well.
</p>
<p>To &ldquo;convey&rdquo; a work means any kind of propagation that enables other
parties to make or receive copies.  Mere interaction with a user
through a computer network, with no transfer of a copy, is not
conveying.
</p>
<p>An interactive user interface displays &ldquo;Appropriate Legal Notices&rdquo; to
the extent that it includes a convenient and prominently visible
feature that (1) displays an appropriate copyright notice, and (2)
tells the user that there is no warranty for the work (except to the
extent that warranties are provided), that licensees may convey the
work under this License, and how to view a copy of this License.  If
the interface presents a list of user commands or options, such as a
menu, a prominent item in the list meets this criterion.
</p>
</li><li> Source Code.
<p>The &ldquo;source code&rdquo; for a work means the preferred form of the work for
making modifications to it.  &ldquo;Object code&rdquo; means any non-source form
of a work.
</p>
<p>A &ldquo;Standard Interface&rdquo; means an interface that either is an official
standard defined by a recognized standards body, or, in the case of
interfaces specified for a particular programming language, one that
is widely used among developers working in that language.
</p>
<p>The &ldquo;System Libraries&rdquo; of an executable work include anything, other
than the work as a whole, that (a) is included in the normal form of
packaging a Major Component, but which is not part of that Major
Component, and (b) serves only to enable use of the work with that
Major Component, or to implement a Standard Interface for which an
implementation is available to the public in source code form.  A
&ldquo;Major Component&rdquo;, in this context, means a major essential component
(kernel, window system, and so on) of the specific operating system
(if any) on which the executable work runs, or a compiler used to
produce the work, or an object code interpreter used to run it.
</p>
<p>The &ldquo;Corresponding Source&rdquo; for a work in object code form means all
the source code needed to generate, install, and (for an executable
work) run the object code and to modify the work, including scripts to
control those activities.  However, it does not include the work&rsquo;s
System Libraries, or general-purpose tools or generally available free
programs which are used unmodified in performing those activities but
which are not part of the work.  For example, Corresponding Source
includes interface definition files associated with source files for
the work, and the source code for shared libraries and dynamically
linked subprograms that the work is specifically designed to require,
such as by intimate data communication or control flow between those
subprograms and other parts of the work.
</p>
<p>The Corresponding Source need not include anything that users can
regenerate automatically from other parts of the Corresponding Source.
</p>
<p>The Corresponding Source for a work in source code form is that same
work.
</p>
</li><li> Basic Permissions.
<p>All rights granted under this License are granted for the term of
copyright on the Program, and are irrevocable provided the stated
conditions are met.  This License explicitly affirms your unlimited
permission to run the unmodified Program.  The output from running a
covered work is covered by this License only if the output, given its
content, constitutes a covered work.  This License acknowledges your
rights of fair use or other equivalent, as provided by copyright law.
</p>
<p>You may make, run and propagate covered works that you do not convey,
without conditions so long as your license otherwise remains in force.
You may convey covered works to others for the sole purpose of having
them make modifications exclusively for you, or provide you with
facilities for running those works, provided that you comply with the
terms of this License in conveying all material for which you do not
control copyright.  Those thus making or running the covered works for
you must do so exclusively on your behalf, under your direction and
control, on terms that prohibit them from making any copies of your
copyrighted material outside their relationship with you.
</p>
<p>Conveying under any other circumstances is permitted solely under the
conditions stated below.  Sublicensing is not allowed; section 10
makes it unnecessary.
</p>
</li><li> Protecting Users&rsquo; Legal Rights From Anti-Circumvention Law.
<p>No covered work shall be deemed part of an effective technological
measure under any applicable law fulfilling obligations under article
11 of the WIPO copyright treaty adopted on 20 December 1996, or
similar laws prohibiting or restricting circumvention of such
measures.
</p>
<p>When you convey a covered work, you waive any legal power to forbid
circumvention of technological measures to the extent such
circumvention is effected by exercising rights under this License with
respect to the covered work, and you disclaim any intention to limit
operation or modification of the work as a means of enforcing, against
the work&rsquo;s users, your or third parties&rsquo; legal rights to forbid
circumvention of technological measures.
</p>
</li><li> Conveying Verbatim Copies.
<p>You may convey verbatim copies of the Program&rsquo;s source code as you
receive it, in any medium, provided that you conspicuously and
appropriately publish on each copy an appropriate copyright notice;
keep intact all notices stating that this License and any
non-permissive terms added in accord with section 7 apply to the code;
keep intact all notices of the absence of any warranty; and give all
recipients a copy of this License along with the Program.
</p>
<p>You may charge any price or no price for each copy that you convey,
and you may offer support or warranty protection for a fee.
</p>
</li><li> Conveying Modified Source Versions.
<p>You may convey a work based on the Program, or the modifications to
produce it from the Program, in the form of source code under the
terms of section 4, provided that you also meet all of these
conditions:
</p>
<ol class="enumerate" type="a" start="1">
<li> The work must carry prominent notices stating that you modified it,
and giving a relevant date.
</li><li> The work must carry prominent notices stating that it is released
under this License and any conditions added under section 7.  This
requirement modifies the requirement in section 4 to &ldquo;keep intact all
notices&rdquo;.
</li><li> You must license the entire work, as a whole, under this License to
anyone who comes into possession of a copy.  This License will
therefore apply, along with any applicable section 7 additional terms,
to the whole of the work, and all its parts, regardless of how they
are packaged.  This License gives no permission to license the work in
any other way, but it does not invalidate such permission if you have
separately received it.
</li><li> If the work has interactive user interfaces, each must display
Appropriate Legal Notices; however, if the Program has interactive
interfaces that do not display Appropriate Legal Notices, your work
need not make them do so.
</li></ol>
<p>A compilation of a covered work with other separate and independent
works, which are not by their nature extensions of the covered work,
and which are not combined with it such as to form a larger program,
in or on a volume of a storage or distribution medium, is called an
&ldquo;aggregate&rdquo; if the compilation and its resulting copyright are not
used to limit the access or legal rights of the compilation&rsquo;s users
beyond what the individual works permit.  Inclusion of a covered work
in an aggregate does not cause this License to apply to the other
parts of the aggregate.
</p>
</li><li> Conveying Non-Source Forms.
<p>You may convey a covered work in object code form under the terms of
sections 4 and 5, provided that you also convey the machine-readable
Corresponding Source under the terms of this License, in one of these
ways:
</p>
<ol class="enumerate" type="a" start="1">
<li> Convey the object code in, or embodied in, a physical product
(including a physical distribution medium), accompanied by the
Corresponding Source fixed on a durable physical medium customarily
used for software interchange.
</li><li> Convey the object code in, or embodied in, a physical product
(including a physical distribution medium), accompanied by a written
offer, valid for at least three years and valid for as long as you
offer spare parts or customer support for that product model, to give
anyone who possesses the object code either (1) a copy of the
Corresponding Source for all the software in the product that is
covered by this License, on a durable physical medium customarily used
for software interchange, for a price no more than your reasonable
cost of physically performing this conveying of source, or (2) access
to copy the Corresponding Source from a network server at no charge.
</li><li> Convey individual copies of the object code with a copy of the written
offer to provide the Corresponding Source.  This alternative is
allowed only occasionally and noncommercially, and only if you
received the object code with such an offer, in accord with subsection
6b.
</li><li> Convey the object code by offering access from a designated place
(gratis or for a charge), and offer equivalent access to the
Corresponding Source in the same way through the same place at no
further charge.  You need not require recipients to copy the
Corresponding Source along with the object code.  If the place to copy
the object code is a network server, the Corresponding Source may be
on a different server (operated by you or a third party) that supports
equivalent copying facilities, provided you maintain clear directions
next to the object code saying where to find the Corresponding Source.
Regardless of what server hosts the Corresponding Source, you remain
obligated to ensure that it is available for as long as needed to
satisfy these requirements.
</li><li> Convey the object code using peer-to-peer transmission, provided you
inform other peers where the object code and Corresponding Source of
the work are being offered to the general public at no charge under
subsection 6d.
</li></ol>
<p>A separable portion of the object code, whose source code is excluded
from the Corresponding Source as a System Library, need not be
included in conveying the object code work.
</p>
<p>A &ldquo;User Product&rdquo; is either (1) a &ldquo;consumer product&rdquo;, which means any
tangible personal property which is normally used for personal,
family, or household purposes, or (2) anything designed or sold for
incorporation into a dwelling.  In determining whether a product is a
consumer product, doubtful cases shall be resolved in favor of
coverage.  For a particular product received by a particular user,
&ldquo;normally used&rdquo; refers to a typical or common use of that class of
product, regardless of the status of the particular user or of the way
in which the particular user actually uses, or expects or is expected
to use, the product.  A product is a consumer product regardless of
whether the product has substantial commercial, industrial or
non-consumer uses, unless such uses represent the only significant
mode of use of the product.
</p>
<p>&ldquo;Installation Information&rdquo; for a User Product means any methods,
procedures, authorization keys, or other information required to
install and execute modified versions of a covered work in that User
Product from a modified version of its Corresponding Source.  The
information must suffice to ensure that the continued functioning of
the modified object code is in no case prevented or interfered with
solely because modification has been made.
</p>
<p>If you convey an object code work under this section in, or with, or
specifically for use in, a User Product, and the conveying occurs as
part of a transaction in which the right of possession and use of the
User Product is transferred to the recipient in perpetuity or for a
fixed term (regardless of how the transaction is characterized), the
Corresponding Source conveyed under this section must be accompanied
by the Installation Information.  But this requirement does not apply
if neither you nor any third party retains the ability to install
modified object code on the User Product (for example, the work has
been installed in ROM).
</p>
<p>The requirement to provide Installation Information does not include a
requirement to continue to provide support service, warranty, or
updates for a work that has been modified or installed by the
recipient, or for the User Product in which it has been modified or
installed.  Access to a network may be denied when the modification
itself materially and adversely affects the operation of the network
or violates the rules and protocols for communication across the
network.
</p>
<p>Corresponding Source conveyed, and Installation Information provided,
in accord with this section must be in a format that is publicly
documented (and with an implementation available to the public in
source code form), and must require no special password or key for
unpacking, reading or copying.
</p>
</li><li> Additional Terms.
<p>&ldquo;Additional permissions&rdquo; are terms that supplement the terms of this
License by making exceptions from one or more of its conditions.
Additional permissions that are applicable to the entire Program shall
be treated as though they were included in this License, to the extent
that they are valid under applicable law.  If additional permissions
apply only to part of the Program, that part may be used separately
under those permissions, but the entire Program remains governed by
this License without regard to the additional permissions.
</p>
<p>When you convey a copy of a covered work, you may at your option
remove any additional permissions from that copy, or from any part of
it.  (Additional permissions may be written to require their own
removal in certain cases when you modify the work.)  You may place
additional permissions on material, added by you to a covered work,
for which you have or can give appropriate copyright permission.
</p>
<p>Notwithstanding any other provision of this License, for material you
add to a covered work, you may (if authorized by the copyright holders
of that material) supplement the terms of this License with terms:
</p>
<ol class="enumerate" type="a" start="1">
<li> Disclaiming warranty or limiting liability differently from the terms
of sections 15 and 16 of this License; or
</li><li> Requiring preservation of specified reasonable legal notices or author
attributions in that material or in the Appropriate Legal Notices
displayed by works containing it; or
</li><li> Prohibiting misrepresentation of the origin of that material, or
requiring that modified versions of such material be marked in
reasonable ways as different from the original version; or
</li><li> Limiting the use for publicity purposes of names of licensors or
authors of the material; or
</li><li> Declining to grant rights under trademark law for use of some trade
names, trademarks, or service marks; or
</li><li> Requiring indemnification of licensors and authors of that material by
anyone who conveys the material (or modified versions of it) with
contractual assumptions of liability to the recipient, for any
liability that these contractual assumptions directly impose on those
licensors and authors.
</li></ol>
<p>All other non-permissive additional terms are considered &ldquo;further
restrictions&rdquo; within the meaning of section 10.  If the Program as you
received it, or any part of it, contains a notice stating that it is
governed by this License along with a term that is a further
restriction, you may remove that term.  If a license document contains
a further restriction but permits relicensing or conveying under this
License, you may add to a covered work material governed by the terms
of that license document, provided that the further restriction does
not survive such relicensing or conveying.
</p>
<p>If you add terms to a covered work in accord with this section, you
must place, in the relevant source files, a statement of the
additional terms that apply to those files, or a notice indicating
where to find the applicable terms.
</p>
<p>Additional terms, permissive or non-permissive, may be stated in the
form of a separately written license, or stated as exceptions; the
above requirements apply either way.
</p>
</li><li> Termination.
<p>You may not propagate or modify a covered work except as expressly
provided under this License.  Any attempt otherwise to propagate or
modify it is void, and will automatically terminate your rights under
this License (including any patent licenses granted under the third
paragraph of section 11).
</p>
<p>However, if you cease all violation of this License, then your license
from a particular copyright holder is reinstated (a) provisionally,
unless and until the copyright holder explicitly and finally
terminates your license, and (b) permanently, if the copyright holder
fails to notify you of the violation by some reasonable means prior to
60 days after the cessation.
</p>
<p>Moreover, your license from a particular copyright holder is
reinstated permanently if the copyright holder notifies you of the
violation by some reasonable means, this is the first time you have
received notice of violation of this License (for any work) from that
copyright holder, and you cure the violation prior to 30 days after
your receipt of the notice.
</p>
<p>Termination of your rights under this section does not terminate the
licenses of parties who have received copies or rights from you under
this License.  If your rights have been terminated and not permanently
reinstated, you do not qualify to receive new licenses for the same
material under section 10.
</p>
</li><li> Acceptance Not Required for Having Copies.
<p>You are not required to accept this License in order to receive or run
a copy of the Program.  Ancillary propagation of a covered work
occurring solely as a consequence of using peer-to-peer transmission
to receive a copy likewise does not require acceptance.  However,
nothing other than this License grants you permission to propagate or
modify any covered work.  These actions infringe copyright if you do
not accept this License.  Therefore, by modifying or propagating a
covered work, you indicate your acceptance of this License to do so.
</p>
</li><li> Automatic Licensing of Downstream Recipients.
<p>Each time you convey a covered work, the recipient automatically
receives a license from the original licensors, to run, modify and
propagate that work, subject to this License.  You are not responsible
for enforcing compliance by third parties with this License.
</p>
<p>An &ldquo;entity transaction&rdquo; is a transaction transferring control of an
organization, or substantially all assets of one, or subdividing an
organization, or merging organizations.  If propagation of a covered
work results from an entity transaction, each party to that
transaction who receives a copy of the work also receives whatever
licenses to the work the party&rsquo;s predecessor in interest had or could
give under the previous paragraph, plus a right to possession of the
Corresponding Source of the work from the predecessor in interest, if
the predecessor has it or can get it with reasonable efforts.
</p>
<p>You may not impose any further restrictions on the exercise of the
rights granted or affirmed under this License.  For example, you may
not impose a license fee, royalty, or other charge for exercise of
rights granted under this License, and you may not initiate litigation
(including a cross-claim or counterclaim in a lawsuit) alleging that
any patent claim is infringed by making, using, selling, offering for
sale, or importing the Program or any portion of it.
</p>
</li><li> Patents.
<p>A &ldquo;contributor&rdquo; is a copyright holder who authorizes use under this
License of the Program or a work on which the Program is based.  The
work thus licensed is called the contributor&rsquo;s &ldquo;contributor version&rdquo;.
</p>
<p>A contributor&rsquo;s &ldquo;essential patent claims&rdquo; are all patent claims owned
or controlled by the contributor, whether already acquired or
hereafter acquired, that would be infringed by some manner, permitted
by this License, of making, using, or selling its contributor version,
but do not include claims that would be infringed only as a
consequence of further modification of the contributor version.  For
purposes of this definition, &ldquo;control&rdquo; includes the right to grant
patent sublicenses in a manner consistent with the requirements of
this License.
</p>
<p>Each contributor grants you a non-exclusive, worldwide, royalty-free
patent license under the contributor&rsquo;s essential patent claims, to
make, use, sell, offer for sale, import and otherwise run, modify and
propagate the contents of its contributor version.
</p>
<p>In the following three paragraphs, a &ldquo;patent license&rdquo; is any express
agreement or commitment, however denominated, not to enforce a patent
(such as an express permission to practice a patent or covenant not to
sue for patent infringement).  To &ldquo;grant&rdquo; such a patent license to a
party means to make such an agreement or commitment not to enforce a
patent against the party.
</p>
<p>If you convey a covered work, knowingly relying on a patent license,
and the Corresponding Source of the work is not available for anyone
to copy, free of charge and under the terms of this License, through a
publicly available network server or other readily accessible means,
then you must either (1) cause the Corresponding Source to be so
available, or (2) arrange to deprive yourself of the benefit of the
patent license for this particular work, or (3) arrange, in a manner
consistent with the requirements of this License, to extend the patent
license to downstream recipients.  &ldquo;Knowingly relying&rdquo; means you have
actual knowledge that, but for the patent license, your conveying the
covered work in a country, or your recipient&rsquo;s use of the covered work
in a country, would infringe one or more identifiable patents in that
country that you have reason to believe are valid.
</p>
<p>If, pursuant to or in connection with a single transaction or
arrangement, you convey, or propagate by procuring conveyance of, a
covered work, and grant a patent license to some of the parties
receiving the covered work authorizing them to use, propagate, modify
or convey a specific copy of the covered work, then the patent license
you grant is automatically extended to all recipients of the covered
work and works based on it.
</p>
<p>A patent license is &ldquo;discriminatory&rdquo; if it does not include within the
scope of its coverage, prohibits the exercise of, or is conditioned on
the non-exercise of one or more of the rights that are specifically
granted under this License.  You may not convey a covered work if you
are a party to an arrangement with a third party that is in the
business of distributing software, under which you make payment to the
third party based on the extent of your activity of conveying the
work, and under which the third party grants, to any of the parties
who would receive the covered work from you, a discriminatory patent
license (a) in connection with copies of the covered work conveyed by
you (or copies made from those copies), or (b) primarily for and in
connection with specific products or compilations that contain the
covered work, unless you entered into that arrangement, or that patent
license was granted, prior to 28 March 2007.
</p>
<p>Nothing in this License shall be construed as excluding or limiting
any implied license or other defenses to infringement that may
otherwise be available to you under applicable patent law.
</p>
</li><li> No Surrender of Others&rsquo; Freedom.
<p>If conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot convey
a covered work so as to satisfy simultaneously your obligations under
this License and any other pertinent obligations, then as a
consequence you may not convey it at all.  For example, if you agree
to terms that obligate you to collect a royalty for further conveying
from those to whom you convey the Program, the only way you could
satisfy both those terms and this License would be to refrain entirely
from conveying the Program.
</p>
</li><li> Use with the GNU Affero General Public License.
<p>Notwithstanding any other provision of this License, you have
permission to link or combine any covered work with a work licensed
under version 3 of the GNU Affero General Public License into a single
combined work, and to convey the resulting work.  The terms of this
License will continue to apply to the part which is the covered work,
but the special requirements of the GNU Affero General Public License,
section 13, concerning interaction through a network will apply to the
combination as such.
</p>
</li><li> Revised Versions of this License.
<p>The Free Software Foundation may publish revised and/or new versions
of the GNU General Public License from time to time.  Such new
versions will be similar in spirit to the present version, but may
differ in detail to address new problems or concerns.
</p>
<p>Each version is given a distinguishing version number.  If the Program
specifies that a certain numbered version of the GNU General Public
License &ldquo;or any later version&rdquo; applies to it, you have the option of
following the terms and conditions either of that numbered version or
of any later version published by the Free Software Foundation.  If
the Program does not specify a version number of the GNU General
Public License, you may choose any version ever published by the Free
Software Foundation.
</p>
<p>If the Program specifies that a proxy can decide which future versions
of the GNU General Public License can be used, that proxy&rsquo;s public
statement of acceptance of a version permanently authorizes you to
choose that version for the Program.
</p>
<p>Later license versions may give you additional or different
permissions.  However, no additional obligations are imposed on any
author or copyright holder as a result of your choosing to follow a
later version.
</p>
</li><li> Disclaimer of Warranty.
<p>THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY
APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT
HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM &ldquo;AS IS&rdquo; WITHOUT
WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND
PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE PROGRAM PROVE
DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR
CORRECTION.
</p>
</li><li> Limitation of Liability.
<p>IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND/OR
CONVEYS THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,
INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES
ARISING OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT
NOT LIMITED TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR
LOSSES SUSTAINED BY YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM
TO OPERATE WITH ANY OTHER PROGRAMS), EVEN IF SUCH HOLDER OR OTHER
PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
</p>
</li><li> Interpretation of Sections 15 and 16.
<p>If the disclaimer of warranty and limitation of liability provided
above cannot be given local legal effect according to their terms,
reviewing courts shall apply local law that most closely approximates
an absolute waiver of all civil liability in connection with the
Program, unless a warranty or assumption of liability accompanies a
copy of the Program in return for a fee.
</p>
</li></ol>
<h3 class="heading" id="END-OF-TERMS-AND-CONDITIONS">END OF TERMS AND CONDITIONS</h3>
<h3 class="heading" id="How-to-Apply-These-Terms-to-Your-New-Programs">How to Apply These Terms to Your New Programs</h3>
<p>If you develop a new program, and you want it to be of the greatest
possible use to the public, the best way to achieve this is to make it
free software which everyone can redistribute and change under these
terms.
</p>
<p>To do so, attach the following notices to the program.  It is safest
to attach them to the start of each source file to most effectively
state the exclusion of warranty; and each file should have at least
the &ldquo;copyright&rdquo; line and a pointer to where the full notice is found.
</p>
<div class="example smallexample">
<pre class="example-preformatted"><var class="var">one line to give the program's name and a brief idea of what it does.</var>  
Copyright (C) <var class="var">year</var> <var class="var">name of author</var>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <a class="url" href="http://www.gnu.org/licenses/">http://www.gnu.org/licenses/</a>.
</pre></div>
<p>Also add information on how to contact you by electronic and paper mail.
</p>
<p>If the program does terminal interaction, make it output a short
notice like this when it starts in an interactive mode:
</p>
<div class="example smallexample">
<pre class="example-preformatted"><var class="var">program</var> Copyright (C) <var class="var">year</var> <var class="var">name of author</var> 
This program comes with ABSOLUTELY NO WARRANTY; for details type &lsquo;<samp class="samp">show w</samp>&rsquo;.
This is free software, and you are welcome to redistribute it
under certain conditions; type &lsquo;<samp class="samp">show c</samp>&rsquo; for details.
</pre></div>
<p>The hypothetical commands &lsquo;<samp class="samp">show w</samp>&rsquo; and &lsquo;<samp class="samp">show c</samp>&rsquo; should show
the appropriate parts of the General Public License.  Of course, your
program&rsquo;s commands might be different; for a GUI interface, you would
use an &ldquo;about box&rdquo;.
</p>
<p>You should also get your employer (if you work as a programmer) or school,
if any, to sign a &ldquo;copyright disclaimer&rdquo; for the program, if necessary.
For more information on this, and how to apply and follow the GNU GPL, see
<a class="url" href="http://www.gnu.org/licenses/">http://www.gnu.org/licenses/</a>.
</p>
<p>The GNU General Public License does not permit incorporating your
program into proprietary programs.  If your program is a subroutine
library, you may consider it more useful to permit linking proprietary
applications with the library.  If this is what you want to do, use
the GNU Lesser General Public License instead of this License.  But
first, please read <a class="url" href="http://www.gnu.org/philosophy/why-not-lgpl.html">http://www.gnu.org/philosophy/why-not-lgpl.html</a>.
</p>
<hr>
</div>
<div class="unnumbered-level-extent" id="Index">
<div class="nav-panel">
<p>
Previous: <a href="#Copying" accesskey="p" rel="prev">GNU General Public License</a>, Up: <a href="#Top" accesskey="u" rel="up">Introduction</a> &nbsp; [<a href="#SEC_Contents" title="Table of contents" rel="contents">Contents</a>][<a href="#Index" title="Index" rel="index">Index</a>]</p>
</div>
<h2 class="unnumbered" id="Index-1">Index</h2>
 
<div class="printindex cp-printindex">
<table class="cp-letters-header-printindex"><tr><th>Jump to: &nbsp; </th><td><a class="summary-letter-printindex" href="#Index_cp_letter-B"><b>B</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-C"><b>C</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-E"><b>E</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-F"><b>F</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-I"><b>I</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-L"><b>L</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-O"><b>O</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-W"><b>W</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-Z"><b>Z</b></a>
 &nbsp; 
</td></tr></table>
<table class="cp-entries-printindex" border="0">
<tr><td></td><th class="entries-header-printindex">Index Entry</th><td>&nbsp;</td><th class="sections-header-printindex"> Section</th></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-B">B</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Basic-Usage-Overview">Basic Usage Overview</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Basic-Usage-Overview">Basic Usage Overview</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-C">C</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-copyright">copyright</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Copying">Copying</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-E">E</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Example1">Example1</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Examples">Examples</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Example2">Example2</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Examples">Examples</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Example3">Example3</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Examples">Examples</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Example4">Example4</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Examples">Examples</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Example5">Example5</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Examples">Examples</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Examples">Examples</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Examples">Examples</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-F">F</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Function-Reference">Function Reference</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Function-Reference">Function Reference</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-I">I</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Installing-and-loading">Installing and loading</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Installing-and-loading">Installing and loading</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-iszmq">iszmq</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-L">L</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Loading">Loading</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Installing-and-loading">Installing and loading</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-O">O</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Off_002dline-install">Off-line install</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Installing-and-loading">Installing and loading</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-Online-install">Online install</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Installing-and-loading">Installing and loading</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-W">W</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-warranty">warranty</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Copying">Copying</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="Index_cp_letter-Z">Z</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZeroMQ-functions">ZeroMQ functions</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZeroMQ-receive-send-options">ZeroMQ receive send options</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-receive-send-options">ZeroMQ receive send options</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZeroMQ-ZMQ_005fEVENTS-flags">ZeroMQ ZMQ_EVENTS flags</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-ZMQ_005fEVENTS-flags">ZeroMQ ZMQ_EVENTS flags</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZeroMQ-ZMQ_005fMECHANISM-values">ZeroMQ ZMQ_MECHANISM values</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-ZMQ_005fMECHANISM-values">ZeroMQ ZMQ_MECHANISM values</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fBACKLOG">ZMQ_BACKLOG</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fbind">zmq_bind</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fclose">zmq_close</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fconnect">zmq_connect</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fCONNECT_005fTIMEOUT">ZMQ_CONNECT_TIMEOUT</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fCURVE">ZMQ_CURVE</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-ZMQ_005fMECHANISM-values">ZeroMQ ZMQ_MECHANISM values</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fcurve_005fkeypair">zmq_curve_keypair</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fcurve_005fpublic">zmq_curve_public</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fCURVE_005fPUBLICKEY">ZMQ_CURVE_PUBLICKEY</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fCURVE_005fSECRETKEY">ZMQ_CURVE_SECRETKEY</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fCURVE_005fSERVER">ZMQ_CURVE_SERVER</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fCURVE_005fSERVERKEY">ZMQ_CURVE_SERVERKEY</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fDEALER">ZMQ_DEALER</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fdisconnect">zmq_disconnect</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fDONTWAIT">ZMQ_DONTWAIT</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-receive-send-options">ZeroMQ receive send options</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005ferrno">zmq_errno</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fEVENTS">ZMQ_EVENTS</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fgetsockopt">zmq_getsockopt</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fGSSAPI">ZMQ_GSSAPI</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-ZMQ_005fMECHANISM-values">ZeroMQ ZMQ_MECHANISM values</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fGSSAPI_005fPLAINTEXT">ZMQ_GSSAPI_PLAINTEXT</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fGSSAPI_005fPRINCIPAL">ZMQ_GSSAPI_PRINCIPAL</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fGSSAPI_005fSERVER">ZMQ_GSSAPI_SERVER</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fGSSAPI_005fSERVICE_005fPRINCIPAL">ZMQ_GSSAPI_SERVICE_PRINCIPAL</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fhas">zmq_has</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fIDENTITY">ZMQ_IDENTITY</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fLAST_005fENDPOINT">ZMQ_LAST_ENDPOINT</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fMECHANISM">ZMQ_MECHANISM</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fNULL">ZMQ_NULL</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-ZMQ_005fMECHANISM-values">ZeroMQ ZMQ_MECHANISM values</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPAIR">ZMQ_PAIR</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPLAIN">ZMQ_PLAIN</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-ZMQ_005fMECHANISM-values">ZeroMQ ZMQ_MECHANISM values</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPLAIN_005fPASSWORD">ZMQ_PLAIN_PASSWORD</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPLAIN_005fSERVER">ZMQ_PLAIN_SERVER</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPLAIN_005fUSERNAME">ZMQ_PLAIN_USERNAME</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fpoll">zmq_poll</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPOLLIN">ZMQ_POLLIN</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-ZMQ_005fEVENTS-flags">ZeroMQ ZMQ_EVENTS flags</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPOLLOUT">ZMQ_POLLOUT</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-ZMQ_005fEVENTS-flags">ZeroMQ ZMQ_EVENTS flags</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPRIORITY">ZMQ_PRIORITY</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPUB">ZMQ_PUB</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPULL">ZMQ_PULL</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fPUSH">ZMQ_PUSH</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fRATE">ZMQ_RATE</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fRCVMORE">ZMQ_RCVMORE</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005frecv">zmq_recv</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fREP">ZMQ_REP</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fREQ">ZMQ_REQ</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fROUTER">ZMQ_ROUTER</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fROUTING_005fID">ZMQ_ROUTING_ID</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fsend">zmq_send</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fsetsockopt">zmq_setsockopt</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fSNDMORE">ZMQ_SNDMORE</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-receive-send-options">ZeroMQ receive send options</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fsocket">zmq_socket</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fSOCKS_005fPROXY">ZMQ_SOCKS_PROXY</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fSTREAM">ZMQ_STREAM</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fstrerror">zmq_strerror</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fSUB">ZMQ_SUB</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fSUBSCRIBE">ZMQ_SUBSCRIBE</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fTYPE">ZMQ_TYPE</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005funbind">zmq_unbind</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fUNSUBSCRIBE">ZMQ_UNSUBSCRIBE</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-get_002fsetsockopt-constants">ZeroMQ get/setsockopt constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fversion">zmq_version</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fXPUB">ZMQ_XPUB</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-ZMQ_005fXSUB">ZMQ_XSUB</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-socket-type-constants">ZeroMQ socket type constants</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fz85_005fdecode">zmq_z85_decode</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-zmq_005fz85_005fencode">zmq_z85_encode</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#ZeroMQ-functions">ZeroMQ functions</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
</table>
<table class="cp-letters-footer-printindex"><tr><th>Jump to: &nbsp; </th><td><a class="summary-letter-printindex" href="#Index_cp_letter-B"><b>B</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-C"><b>C</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-E"><b>E</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-F"><b>F</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-I"><b>I</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-L"><b>L</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-O"><b>O</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-W"><b>W</b></a>
 &nbsp; 
<a class="summary-letter-printindex" href="#Index_cp_letter-Z"><b>Z</b></a>
 &nbsp; 
</td></tr></table>
</div>
 
</div>
</div>
