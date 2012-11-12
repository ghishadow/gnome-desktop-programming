NAME := gnome-desktop-programming

PDFLATEX := $(shell which pdflatex)
BUILDDIR := build
PDFTARGET := $(BUILDDIR)/$(NAME).pdf

all: $(PDFTARGET)

TEX_FILES :=
TEX_FILES += book/chapter1.tex
TEX_FILES += book/chapter2.tex
TEX_FILES += book/chapter3.tex
TEX_FILES += book/chapter4.tex
TEX_FILES += book/chapter5.tex
TEX_FILES += book/chapter6.tex
TEX_FILES += book/chapter7.tex
TEX_FILES += book/commands.tex
TEX_FILES += book/gnome-desktop-programming.tex
TEX_FILES += book/introduction.tex
TEX_FILES += book/preamble.tex
TEX_FILES += book/preface.tex

FIGURE_FILES :=
EXERCISE_FILES :=

$(BUILDDIR)/%.tex: figures/%.c
	@mkdir -p $(BUILDDIR)
	@echo "  [FORMAT]   $*"
	@./scripts/formatter.py figures/$*.c $(BUILDDIR)/$*.tex

$(BUILDDIR)/exercise%.tex: exercises/exercise%.c
	@mkdir -p $(BUILDDIR)
	@echo "  [FORMAT]   exercise$*"
	@./scripts/formatter.py exercises/exercise$*.c $(BUILDDIR)/exercise$*.tex

TEX_DEPS :=
TEX_DEPS += $(TEX_FILES)
TEX_DEPS += $(foreach var,$(FIGURE_FILES),$(BUILDDIR)/$(var:.c=.tex))
TEX_DEPS += $(foreach var,$(EXERCISE_FILES),$(BUILDDIR)/$(var:.c=.tex))

$(PDFTARGET): $(TEX_DEPS)
	@mkdir -p $(BUILDDIR)
	@echo "  [COPY]     styles"
	@cp -a styles/*.sty $(BUILDDIR)
	@echo "  [COPY]     tex"
	@cp -a book/*.tex $(BUILDDIR)
	@echo "  [COPY]     out"
	@cp -a exercises/*.out $(BUILDDIR)
	@echo "  [TOC]      $(NAME)"
	@TEXINPUTS=:$(BUILDDIR) $(PDFLATEX) -halt-on-error -output-directory $(BUILDDIR) -output-format pdf $(NAME).tex >/dev/null
	@echo "  [PDFLATEX] $(NAME).pdf"
	@rm $(BUILDDIR)/$(NAME).pdf
	@TEXINPUTS=:$(BUILDDIR) $(PDFLATEX) -halt-on-error -output-directory $(BUILDDIR) -output-format pdf $(NAME).tex >/dev/null

view: $(PDFTARGET)
	evince $(PDFTARGET)

clean:
	@echo "  [CLEAN]    build"
	@rm -rf $(BUILDDIR)
