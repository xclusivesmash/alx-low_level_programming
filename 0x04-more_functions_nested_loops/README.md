# C - More Functions, More Nested Loops

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The enphasis is on enforcing programming skills at ALX SE Programme.

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Allowed editors: `vi`, `vim`, or `emacs`
* Style Guide: <a href="https://intranet.alxswe.com/rltoken/wQ4sMfsWfxvyfN67Sc11zA">Betty Style</a>
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden.
* No more than 5 functions per file.
* You are not allowed to use global variables
* You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar</a>
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`

### Learning Objectives
* What are nested loops and how to use them.
* What is a function and how do you use functions.
* What is the difference between a declaration and a definition of a function.
* What is a prototype.
* Scope of variables.
* What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`.
* What are header files and how to to use them with `#include`.

### Script Information
0. **0-isupper.c** - checks for uppercase character.
    * Prototype: `int _isupper(int c);`
    * Returns `1` if `c` is uppercase
    * Returns `0` otherwise.<br>

1. **1-isdigit.c** - checks for a digit (`0` through `9`).
    * Prototype: `int _isdigit(int c);`
    * Returns `1` if `c` is a digit
    * Returns `0` otherwise<br>

2. **2-mul.c** - multiplies two integers.
    * Prototype: `int mul(int a, int b);`<br>

3. **3-print_numbers.c** - prints the numbers, from `0` to `9`, followed by a new line..
    * Prototype: `void print_numbers(void);`
    * You can only use `_putchar` twice in your code<br>

4. **4-print_most_numbers.c** - prints the numbers, from `0` to `9`, followed by a new line.
    * Prototype: `void print_most_numb`
    * Do not print `2` and `4`
    * You can only use `_putchar` twice in your code<br>

5. **5-more_numbers.c** - prints 10 times the numbers, from `0` to `14`, followed by a new line.
    * Prototype: `void more_numbers(void);`
    * You can only use `_putchar` three times in your code<br>

6. **6-print_line.c** - draws a straight line in the terminal.
    * Prototype: `void print_line(int n);`
    * You can only use `_putchar` function to print
    * Where `n` is the number of times the character `_` should be printed
    * The line should end with a `\n`
    * If `n` is `0` or less, the function should only print `\n`<br>

7. **7-print_diagonal.c** - draws a diagonal line on the terminal.
    * Prototype: `void print_diagonal(int n);`
    * You can only use `_putchar` function to print
    * Where `n` is the number of times the character `\` should be printed
    * The diagonal should end with a `\n`
    * If `n` is `0` or less, the function should only print a `\n`<br>

8. **8-print_square.c** -  prints a square, followed by a new line.
    * Prototype: `void print_square(int size);`
    * You can only use `_putchar` function to print
    * Where `size` is the size of the square
    * If `size` is `0` or less, the function should print only a new line
    * Use the character `#` to print the square<br>

9. **9-fizz_buzz.c** - The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag. The program prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz `instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.
    * Each number or word should be separated by a space
    * You are allowed to use the standard library<br>

10. **10-print_triangle.c** - prints a triangle, followed by a new line.
    * Prototype: `void print_triangle(int size);`
    * You can only use `_putchar` function to print
    * Where `size` is the size of the triangle
    * If `size` is `0` or less, the function should print only a new line
    * Use the character `#` to print the triangle<br>

11. **100-prime_factor.c** - The prime factors of `1231952` are `2, 2, 2, 2, 37 and 2081`. The script finds and prints the largest prime factor of the number `612852475143`, followed by a new line.
    * You are allowed to use the standard library
    * program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`<br>

12. **101-print_number.c** - prints an integer.
    * Prototype: `void print_number(int n);`
    * You can only use `_putchar` function to print
    * You are not allowed to use `long`
    * You are not allowed to use arrays or pointers
    * You are not allowed to hard-code special values.<br>

### Authors
* Siphamandla Matshiane

### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>


