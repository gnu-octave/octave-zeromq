#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.67])
AC_INIT([octave zeromq package], [1.0.0])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_LANG(C++)

AC_CHECK_TOOL([MKOCTFILE], [mkoctfile], [none])
if [ test "$MKOCTFILE" = "none" ]; then
  AC_MSG_ERROR([mkoctfile required to install $PACKAGE_NAME])
fi

# Checks for zeromq
have_zmq=no
AC_CHECK_HEADERS([zmq.h],
  [AC_SEARCH_LIBS([zmq_version], [zmq], [have_zmq=yes], [])], [] )

if [ test "$have_zmq" != "yes" ]; then
  AC_MSG_ERROR([$PACKAGE_NAME requires zeromq library])
fi

TARGETS=zeromq.oct
AC_SUBST(TARGETS)

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

AC_MSG_NOTICE([

$PACKAGE_NAME is configured with:
  LIBS:     $LIBS
  CXXFLAGS: $CXXFLAGS $DEFS
  TARGETS:  $TARGETS
])

