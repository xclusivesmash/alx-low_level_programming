# C - Hello, World

### Description
This repository contains shell scripts and C files that are created to develop software engineering skills as part of the learning objectives at ALX SE programme.

### Requirements
* Language(s): `C` & `Bash`
* Operating System: `Ubuntu 20.04 LTS`
* Allowed Editors: `vi`, `vim, `emacs`
* All the C files are compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* The use of `system` is not allowed.
* All bash scripts are executables (`chmod u+x <filename>`) with two lines.
* Code Style: <a href="https://github.com/holbertonschool/Betty">Betty Style</a>

### Learning Objectives
* Why C programming is awesome.
* Who invented C.
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds.
* What happens when you type `gcc main.c`.
* What is an entry point.
* What is `main`.
* How to print text using `printf`, `puts` and `putchar`.
* How to get the size of a specific type using the unary operator sizeof.
* How to compile using `gcc`.
* What is the default program name when compiling with `gcc`.
* What is the official C coding style and how to check your code with `betty-style`.
* How to find the right header to include in your source code when using a standard library function.
* How does the `main` function influence the return value of the program.

### Script Information
0. **0-preprocessor** - Runs a C file through the preprocessor and save the result into another file. The C file name will be saved in the variable `$CFILE`. The output should be saved in the file `c`.<br>
1. **1-compiler** - Compiles a C file but does not link. The C file name will be saved in the variable `$CFILE`. The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.<br>
2. **2-assembler** - Generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable `$CFILE`. The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.<br>
3. **3-name** - Compiles a C file and creates an executable named `cisfun`. The C file name will be saved in the variable `$CFILE`.<br>
4. **4-puts.c** -  Prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line. Use the function `puts`. You are not allowed to use `printf`. Your program should end with the value `0`.<br>
5. **5-printf.c** - Prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line. Use the function `printf`. You are not allowed to use the function `puts`. The program should return `0`. The program should compile without warning when using the `-Wall gcc` option.<br>
6. **6-size.c** - Prints the size of various types on the computer it is compiled and run on. Warnings are allowed. Your program should return `0`. You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option. 
```
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
```<br>
7. **100-intel** - Generates the assembly code (Intel syntax) of a C code and save it in an output file. The C file name will be saved in the variable `$CFILE`. The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.<br>
8. **101-quote.c** - prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`. The program should return 1.<br>

### Author(s)
* Siphamandla Matshiane

### LICENSE
* <a href="https://www.holbertonschool.com/"> ALX SE Programme</a>
