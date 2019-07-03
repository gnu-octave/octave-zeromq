Introduction
============

The Octave Zeromq package provides ZeroMQ bindings for GNU Octave

Requirements
============

* Octave >= 4.0.0

* [zeromq](https://zeromq.org) library and include files 


Installing
==========

To install, run the octave package manager:

1. If running Windows, the package may already be installed:
   type pkg list, to view the installed packages.

2. To install from source forge:
   pkg install -forge zeromq

3. To install from a local tarball.
   pkg install zeromq-XXXXXXX.tar.gz
   Where XXXXXXX is the version of the the downloaded tarball.

Usage:
======

1. Load the package.
   pkg load zeromq
   (Required each time Octave is started)

2. Type help zeromq at the octave prompt to display a list of functions

Documentation
==============

See the function list for octave-zeromq on [octave forge](https://octave.sourceforge.io//overview.html) for function documentation.

See the online manual for octave-zeromq on [octave forge](https://octave.sourceforge.io/zeromq/package_doc/) for complete documentation.

Read the Octave [Octave zeromq package wiki](https://wiki.octave.org/Zeromq_package) for install tips and examples.

Known limitations and bugs
==========================

None provided
