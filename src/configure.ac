#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
#
### Copyright (C) 2016-2022 John Donoghue <john.donoghue@ieee.org>
###
### This program is free software; you can redistribute it and/or
### modify it under the terms of the GNU General Public License as
### published by the Free Software Foundation; either version 3 of the
### License, or (at your option) any later version.
###
### This program is distributed in the hope that it will be useful,
### but WITHOUT ANY WARRANTY; without even the implied warranty of
### MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
### General Public License for more details.
###
### You should have received a copy of the GNU General Public License
### along with this program; if not, see
### <http://www.gnu.org/licenses/>.

AC_PREREQ([2.67])
AC_INIT([octave zeromq package], [1.5.4])
AC_CONFIG_HEADERS([config.h])

# Avoid warnings for redefining AH-generated preprocessor symbols of
# Octave.
AH_TOP([#include "undef-ah-octave.h"])

AC_CONFIG_MACRO_DIRS([m4])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CXXCPP
AC_PROG_GREP

AC_LANG(C++)

# check can access std c files
AC_CHECK_HEADERS([string.h])

AC_CHECK_TOOL([MKOCTFILE], [mkoctfile], [none])
if [ test "$MKOCTFILE" = "none" ]; then
  AC_MSG_ERROR([mkoctfile required to install $PACKAGE_NAME])
fi

AC_CHECK_TOOL([OCTAVE_CONFIG], [octave-config], [none])
if [ test "$OCTAVE_CONFIG" = "none" ]; then
  AC_MSG_ERROR([octave-config required to install $PACKAGE_NAME])
fi

save_CPPFLAGS="$CPPFLAGS"
PKG_CHECK_MODULES([libzmq], [libzmq], 
  [],
  []
)

if test "$libzmq_CFLAGS$libzmq_LIBS" != "" ; then
  CPPFLAGS="$libzmq_CFLAGS $save_CPPFLAGS"
  AC_CHECK_HEADERS([zmq.h], ,
     [libzmq_CFLAGS=""; libzmq_LIBS=""],
   )
fi

if test "$libzmq_CFLAGS$libzmq_LIBS" == "" ; then
  AC_MSG_NOTICE([Trying fallback libzmq detection])

  # find headers first
  AC_MSG_CHECKING([for zmq headers path])
  found_header=
  for p in [ /usr/include /usr/local/include /opt/include /mingw32/include /mingw64/include ]; do
    for v in [ '' zmq ]; do
      file_name="$p/$v/zmq.h"
      if test -f $file_name; then 
        CPPFLAGS="-I$p/$v $save_CPPFLAGS"
        AC_COMPILE_IFELSE(
          [AC_LANG_PROGRAM([
           #include <zmq.h>
          ],
          [
            int i=0;
          ])],
        [found_header="$p/$v"],
        [])
      fi
    done
  done

  if test "$found_header" == "" ; then
    AC_MSG_RESULT([not found])
    AC_MSG_ERROR([Unable to find zmq headers]),
  else
    AC_MSG_RESULT([$found_header])
    libzmq_CXXFLAGS="-I$found_header"
    libzmq_LIBS=-lzmq
  fi
fi
CPPFLAGS=$save_CPPFLAGS

# save lib / inc path flags
CXXFLAGS="$CXXFLAGS $libzmq_CFLAGS"
LIBS="$LIBS $libzmq_LIBS"


# Checks for octave depreciated symbols
## Simple symbol alternatives of different Octave versions.
save_altsyms_CXX="$CXX"
save_altsyms_CXXFLAGS="$CXXFLAGS"
save_altsyms_LDFLAGS="$LDFLAGS"
save_altsyms_LIBS="$LIBS"
OCTINCLUDEDIR=${OCTINCLUDEDIR:-`$MKOCTFILE -p INCFLAGS`}
OCTLIBDIR=${OCTLIBDIR:-`$MKOCTFILE -p OCTLIBDIR`}
CXX=`${MKOCTFILE} -p CXX`
CXXFLAGS="$OCTINCLUDEDIR $CXXFLAGS"
LDFLAGS="-L$OCTLIBDIR $LDFLAGS"
LIBS="-loctinterp $LIBS"

OF_OCTAVE_LIST_ALT_SYMS([
[dnl
  [feval],
  [octave::feval],
  [[octave::feval ("date");]],
  [OCTAVE__FEVAL],
  [[#include <octave/parse.h>]],
  [[#include <octave/parse.h>]]
],

[dnl
  [is_float_type],
  [isfloat],
  [[octave_value ().isfloat ();]],
  [OV_ISFLOAT],
  [],
  []
],

[dnl
  [is_integer_type],
  [isinteger],
  [[octave_value ().isinteger ();]],
  [OV_ISINTEGER],
  [],
  []
],

[dnl
  [is_cell],
  [iscell],
  [[octave_value ().iscell ();]],
  [OV_ISCELL],
  [],
  []
],

[dnl
  [octave_base_value],
  [octave_base_dld_value],
  [[octave_base_dld_value tmp();]],
  [OCTAVE_BASE_CLASS],
  [],
  []
]

],[oct-alt-includes.h])

CXX=$save_altsyms_CXX
CXXFLAGS=$save_altsyms_CXXFLAGS
LDFLAGS=$save_altsyms_LDFLAGS
LIBS=$save_altsyms_LIBS


TARGETS="zeromq.oct archtests"
AC_SUBST(TARGETS)

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

AC_MSG_NOTICE([

$PACKAGE_NAME is configured with:
  LIBS:     $LIBS
  CXXFLAGS: $CXXFLAGS $DEFS
  TARGETS:  $TARGETS
])

