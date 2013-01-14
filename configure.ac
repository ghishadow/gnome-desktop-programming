dnl ************************************************************************
dnl Initialize autoconf and automake.
dnl ************************************************************************
AC_PREREQ([2.69])
AC_INIT([gnome-desktop-programming],[0.1.0])
AM_INIT_AUTOMAKE([1.11.1 no-dist-gzip dist-xz])


dnl ************************************************************************
dnl Check for required programs.
dnl ************************************************************************
AC_PATH_PROG([PDFLATEX], [pdflatex], [])
if test "$PDFLATEX" = ""; then
	AC_MSG_ERROR([pdflatex could not be found, please install texlive-latex.])
fi

AC_PATH_PROG([MF2PT1], [mf2pt1], [])
if test "$MF2PT1" = ""; then
	AC_MSG_ERROR([mf2pt1 could not be found, please install texlive-mf2pt1.])
fi

AC_PATH_PROG([DIA], [dia], [])
if test "$DIA" = ""; then
	AC_MSG_ERROR([dia could not be found, please install dia.])
fi


dnl ************************************************************************
dnl Output autoconf files.
dnl ************************************************************************
AC_CONFIG_FILES([
	Makefile
])
AC_OUTPUT


dnl ************************************************************************
dnl Print configure information to console.
dnl ************************************************************************
echo ""
echo "Gnome Desktop Programming $VERSION"
echo ""
echo "  Prefix .................: ${prefix}"
echo ""
echo "  Programs"
echo "    dia ..................: ${DIA}"
echo "    pdflatex .............: ${PDFLATEX}"
echo ""
