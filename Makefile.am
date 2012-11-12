pdfdatadir = $(datadir)/gnome-desktop-programming
pdfdata_DATA :=
pdfdata_DATA += gnome-desktop-programming.pdf


############################################################################
# TEX input files
############################################################################
TEX_FILES =
TEX_FILES += tex/glib_ch1.tex
TEX_FILES += tex/glib_basicdata.tex
TEX_FILES += tex/glib_crypto.tex
TEX_FILES += tex/glib_datetime.tex
TEX_FILES += tex/glib_essentials.tex
TEX_FILES += tex/glib_io.tex
TEX_FILES += tex/glib_mainloop.tex
TEX_FILES += tex/glib_processes.tex
TEX_FILES += tex/glib_strings.tex
TEX_FILES += tex/glib_threads.tex
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
