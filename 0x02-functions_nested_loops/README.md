# C - Functions, Nested loops

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The enphasis is on enforcing programming skills at ALX SE Programme.

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Allowed editors: `vi`, `vim`, or `emacs`
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

### Script information
0. **0-putchar.c** - prints `_putchar`, followed by a new line. The program returns `0`.<br>
1. **1-alphabet.c** - prints the alphabet, in lowercase, followed by a new line. 
    * Prototype: `void print_alphabet(void);`
    * You can only use `_putchar` twice in your code.<br>
2. **2-print_alphabet_x10.c** - prints 10 times the alphabet, in lowercase, followed by a new line.
    * Prototype: `void print_alphabet_x10(void);`
    * You can only use `_putchar` twice in your code.<br>
3. **3-islower.c** - checks for lowercase character.
    * Prototype: `int _islower(int c);`
    * Returns `1` if `c` is lowercase.
    * Returns `0` otherwise.<br>
4. **4-isalpha.c** - checks for alphabetic character.
    * Prototype: `int _isalpha(int c);`
    * Returns `1` if `c` is a letter, lowercase or uppercase
    * Returns `0` otherwise.<br>
5. **5-sign.c** - prints the sign of a number.
    * Prototype: `int print_sign(int n);`
    * Returns `1` and prints `+` if `n` is greater than zero
    * Returns `0` and prints `0` if `n` is zero
    * Returns `-1` and prints `-` if `n` is less than zero.<br>
6. **6-abs.c** - computes the absolute value of an integer.
    * Prototype: `int _abs(int);`.<br>
7. **7-print_last_digit.c** - prints the last digit of a number.
    * Prototype: `int print_last_digit(int);`
    * Returns the value of the last digit.<br>
8. **8-24_hours.c** - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
    * Prototype: `void jack_bauer(void);`
    * You can listen to this <a href="https://intranet.alxswe.com/rltoken/aNwRcWg7MPM1J2lYuuuBjA">soundtrack</a> while coding :).<br>
9. **9-times_table.c** - prints the 9 times table, starting with 0.
    * Prototype: `void times_table(void);`
    * Format: see example below...<br>
```
julien@ubuntu:~/0x02$ cat 9-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$
```
10. **10-add.c** - adds two integers and returns the result.
    * Prototype: `int add(int, int);`<br>
11. **11-print_to_98.c** - prints all natural numbers from `n` to `98`, followed by a new line.
    * Prototype: `void print_to_98(int n);`
    * Numbers must be separated by a comma, followed by a space
    * Numbers should be printed in order
    * The first printed number should be the number passed to your function
    * The last printed number should be `98`
    * You are allowed to use the standard library.<br>
12. **100-times_table.c** - prints the `n` times table, starting with 0.
    * Prototype: `void print_times_table(int n);`
    * If `n` is greater than `15` or less than `0` the function should not print anything
    * Format: see example below...<br>
```
ulien@ubuntu:~/0x02$ cat 100-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
julien@ubuntu:~/0x02$ ./100-times_table 
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
julien@ubuntu:~/0x02$ ./100-times_table | tr ' ' . | cat -e
0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
julien@ubuntu:~/0x02$
```
13. **101-natural.c** - If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
    * You are allowed to use the standard library.<br>
14. **102-fibonacci.c** - prints the first `50` Fibonacci numbers, starting with `1` and `2`, followed by a new line.
    * The numbers must be separated by comma, followed by a space `, `
    * You are allowed to use the standard library.<br>
15. **103-fibonacci.c** - Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first `10` terms will be: `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. By considering the terms in the Fibonacci sequence whose values do not exceed `4,000,000`, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
    * You are allowed to use the standard library.<br>

### Authors
* Siphamandla Matshiane

### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>
