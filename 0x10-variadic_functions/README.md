# C - Variadic functions

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. This repository contains `.c` files created for a deeper understanding of variadic functions in C.

### Learning Objectives
* What are variadic functions
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://github.com/alx-tools/Betty/tree/master">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* You are allowed to use the following macros: `va_start`, `va_arg` and `va_end`
* No more than 5 functions per file.
* The use of global variables is not allowed.
* You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c">_putchar</a>
* All header files should be include guarded.
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `variadic_functions.h`

---
### Scripts

0. **0-sum_them_all.c** - a function that returns the sum of all its parameters.
    * Prototype: `int sum_them_all(const unsigned int n, ...);`
    * If `n == 0`, return `0`
<br>

1. **1-print_numbers.c** - a function that prints numbers, followed by a new line.
    * Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
    * where `separator` is the string to be printed between numbers
    * and `n` is the number of integers passed to the function
    * You are allowed to use `printf`
    * If `separator` is `NULL`, don’t print it
    * Print a new line at the end of your function
<br>

2. **2-print_strings.c** - a function that prints strings, followed by a new line.
    * Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
    * where `separator` is the string to be printed between the strings
    * and `n` is the number of strings passed to the function
    * You are allowed to use `printf`
    * If `separator` is `NULL`, don’t print it
    * If one of the string is `NUL`L, print `(nil)` instead
    * Print a new line at the end of your function
<br>

3. **3-print_all.c** -  a function that prints anything.
    * Prototype: `void print_all(const char * const format, ...);`
    * where `format` is a list of types of arguments passed to the function
        * `c`: `char`
        * `i`: `integer`
        * `f`: `float`
        * `s`: `char *` (if the string is `NULL`, print `(nil)` instead)
        * any other char should be ignored
    * You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
    * You can use a maximum of
        * 2 `while` loops
        * 2 `if` statements
    * You can declare a maximum of `9` variables
    * You are allowed to use `printf`
    * Print a new line at the end of your function
<br>

---
### Author
* Siphamandla Matshiane

### LICENSE
<a href="https://www.alxafrica.com/software-engineering/">ALX Software Engineering</a>
