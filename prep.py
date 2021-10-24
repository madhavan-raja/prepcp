#!/bin/bash

import os
import sys
from sys import platform

BASE_PATH = os.path.dirname(os.path.realpath(__file__))

CODE_TEMPLATE = os.path.join(BASE_PATH, 'template_code.cpp')
MAKEFILE_TEMPLATE = os.path.join(BASE_PATH, 'template_makefile')
INPUTFILE_NAME = 'input.txt'

EXEC = 'a.exe' if platform == 'win32' else './a.out'


def main():
    progs = sys.argv[1:] # Ignore the calling script name

    for prog in progs:
        if not os.path.exists(prog):
            os.mkdir(prog)

        # Code

        code_path = os.path.join(prog, prog + '.cpp')
        code_contents = ''

        with open(CODE_TEMPLATE, 'r') as fin:
            code_contents = fin.read()

        with open(code_path, 'w') as fout:
            fout.write(code_contents)

        # Makefile

        makefile_path = os.path.join(prog, 'Makefile')
        makefile_contents = ''

        with open(MAKEFILE_TEMPLATE, 'r') as fin:
            makefile_contents = fin.read()

        ## Change contents of Makefile

        makefile_contents = makefile_contents.replace('PROG', prog)
        makefile_contents = makefile_contents.replace('INPUTFILE_NAME', INPUTFILE_NAME)
        makefile_contents = makefile_contents.replace('EXEC', EXEC)

        with open(makefile_path, 'w') as fout:
            fout.write(makefile_contents)

        # Inputfile

        inputfile_path = os.path.join(prog, INPUTFILE_NAME)

        with open(inputfile_path, 'w') as fout:
            fout.write('')


if __name__ == '__main__':
    main()
