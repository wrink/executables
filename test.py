#!/usr/bin/env python

import sys

if len(sys.argv) > 1:
	for i in range(1, len(sys.argv)):
		print sys.argv[i]
else:
	print "Hello World!"
