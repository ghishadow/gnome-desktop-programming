all: chapter1.pdf

chapter1_fig%.tex: chapter1_fig%.dia
	dia -e chapter1_fig$*.tex -t tex chapter1_fig$*.dia

chapter1.pdf: chapter1.tex chapter1_fig1.tex
	pdflatex --shell-escape chapter1.tex

clean:
	rm -f *.out *.aux *.log chapter1_fig*.tex

view: chapter1.pdf
	evince chapter1.pdf
