#!/usr/bin/env python

import os
import pygments
import pygments.formatters
import pygments.lexers
import sys

inFile = sys.argv[1]
assert os.path.exists(inFile)
inData = file(inFile).read()

outFile = sys.argv[2]

lexer = pygments.lexers.guess_lexer_for_filename(inFile, inData[:20])
assert lexer

formatter = pygments.formatters.LatexFormatter()
assert formatter

outFileTmp = outFile + '.tmp'
pygments.highlight(inData, lexer, formatter, file(outFileTmp, 'w'))
os.rename(outFileTmp, outFile)
