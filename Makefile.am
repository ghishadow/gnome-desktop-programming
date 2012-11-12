pdfdatadir = $(datadir)/gnome-desktop-programming
pdfdata_DATA :=
pdfdata_DATA += gnome-desktop-programming.pdf


############################################################################
# TEX input files
############################################################################
TEX_FILES =
TEX_FILES += tex/glib_ch1.tex
TEX_FILES += tex/glib_ch2.tex
TEX_FILES += tex/glib_ch3.tex
TEX_FILES += tex/glib_ch4.tex
TEX_FILES += tex/glib_ch5.tex
TEX_FILES += tex/commands.tex
TEX_FILES += tex/gnome-desktop-programming.tex
TEX_FILES += tex/introduction.tex
TEX_FILES += tex/preamble.tex


############################################################################
# Figures
############################################################################


############################################################################
# Gnome Desktop Programming PDF
############################################################################
gnome-desktop-programming.pdf: $(TEX_FILES)
	TEXINPUTS=$(srcdir)/tex: $(PDFLATEX) gnome-desktop-programming.tex
	TEXINPUTS=$(srcdir)/tex: $(PDFLATEX) gnome-desktop-programming.tex


CLEANFILES = *.aux *.tex *.pdf *.out *.log
