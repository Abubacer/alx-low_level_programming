
# Hello, World

## Learning Objectives

At the end of this project, we are expected to be able to explain to anyone, without the help of Google:

    * Why C programming is awesome
    * Who invented C
    * Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
    * What happens when you type gcc main.c
    * What is an entry point
    * What is main
    * How to print text using printf, puts and putchar
    * How to get the size of a specific type using the unary operator sizeof
    * How to compile using gcc
    * What is the default program name when compiling with gcc
    * What is the official C coding style and how to check your code with betty-style
    * How to find the right header to include in your source code when using a standard library function
    * How does the main function influence the return value of the program

## Tasks Files

0-preprocessor
==============
Is a script that runs a C file through the preprocessor and save the result into another file.

    * The C file name will be saved in the variable $CFILE
    * The output is saved in the file c

1-compiler
==========
Is a script that compiles a C file but does not link.

    * The C file name will be saved in the variable $CFILE
    * The output file is named the same as the C file, but with the extension .o instead of .c.
      
2-assembler
===========
Is a script that generates the assembly code of a C code and save it in an output file.

    * The C file name will be saved in the variable $CFILE
    * The output file is named the same as the C file, but with the extension .s instead of .c.
     
3-name
======
Is a script that compiles a C file and creates an executable named cisfun.

    *The C file name will be saved in the variable $CFILE

4-puts.c
========
Is a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

5-printf.c
==========
Is a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

6-size.c
========
is a C program that prints the size of various types on the computer it is compiled and run on.

100-intel
=========
Is a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

    * The C file name will be saved in the variable $CFILE.
    * The output file is named the same as the C file, but with the extension .s instead of .c. 

101-quote.c
===========
Is a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

    *The program is not using any functions listed in the NAME section of the man (3) printf or man (3) puts
    *The program return 1
    *The program compile without any warnings when using the -Wall gcc option
