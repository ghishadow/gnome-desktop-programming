dnl ************************************************************************
dnl Initialize autoconf and automake.
dnl ************************************************************************
AC_PREREQ([2.69])
AC_INIT([gnome-desktop-programming],[0.1.0])
AM_INIT_AUTOMAKE([1.11.1 no-dist-gzip dist-xz])
AC_CONFIG_MACRO_DIR([m4])


dnl ************************************************************************
dnl Check for latex dependencies.
dnl ************************************************************************
AC_LATEX_CLASS_ARTICLE
AC_LATEX_PACKAGE_AMSMATH
AC_LATEX_PACKAGE_FONTENC
AC_PROG_MF
AC_PROG_PDFLATEX


dnl ************************************************************************
dnl Check for other required programs.
dnl ************************************************************************
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
echo "    pdflatex .............: ${pdflatex}"
echo ""
