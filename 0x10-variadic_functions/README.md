# C - Variadic functions

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing programming skills at ALX SE Programme. This repository has C files created for a deeper understanding of variadic functions in C.

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://intranet.alxswe.com/rltoken/wQ4sMfsWfxvyfN67Sc11zA">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, etc… is forbidden.
* No more than 5 functions per file.
* The use of global variables is not allowed.
You are allowed to use the following macros: `va_start`, `va_arg` and `va_end`
* The use of <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar</a> is allowed.
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `variadic_functions.h`
* All header files should be include guarded

### Learning Objectives
* What are variadic functions
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier

### Script information
0. **0-sum_them_all.c** -  returns the sum of all its parameters.
    * Prototype: `int sum_them_all(const unsigned int n, ...);`
    * If `n == 0`, return `0`
<br>

1. **1-print_numbers.c** - prints numbers, followed by a new line.
    * Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
    * where `separator` is the string to be printed between numbers
    * and `n` is the number of integers passed to the function
    * You are allowed to use `printf`
    * If `separator` is `NULL`, don’t print it
    * Print a new line at the end of your function
<br>

2. **2-print_strings.c** - prints strings, followed by a new line.
    * Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
    * where `separator` is the string to be printed between the strings
    * and `n` is the number of strings passed to the function
    * you are allowed to use `printf`
    * If separator is NULL, don’t print it
    * If one of the string is NULL, print `(nil)` instead
    * Print a new line at the end of your function
<br>

3. **3-print_all.c** -  prints anything.
    * Prototype: `void print_all(const char * const format, ...);`
    * where `format` is a list of types of arguments passed to the function
        * `c`: `char`
        * `i`: `integer`
        * `f`: `float`
        * `s`: `char *` (if the string is NULL, print `(nil)` instead
        * any other char should be ignored
    * You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
    * You can use a maximum of 
        * 2 `while` loops
        * 2 `if`
    * You can declare a maximum of `9` variables
    * You are allowed to use `printf`
    * Print a new line at the end of your function
<br>

---

### Author
* Siphamandla Matshiane
### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>

