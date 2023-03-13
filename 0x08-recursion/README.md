 - Recursion

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing programming skills at ALX SE Programme. This repository has C files created for a deeper understanding of recursion.

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden.
* No more than 5 functions per file.
* The use of global variables is not allowed.
* The use of <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar</a> is allowed.
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `main.h`
* **No loops should be used**

### Learning Objectives
* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion

### Script information
0. **0-puts_recursion.c** -  prints a string, followed by a new line.
    * Prototype: `void _puts_recursion(char *s);`
<br>

1. **1-print_rev_recursion.c** - prints a string in reverse.
    * Prototype: `void _print_rev_recursion(char *s);`
<br>

2. **2-strlen_recursion.c** - returns the length of a string.
    * Prototype: `int _strlen_recursion(char *s);`
<br>

3. **3-factorial.c** - returns the factorial of a given number.
    * Prototype: `int factorial(int n);`
    * If `n` is lower than `0`, the function should return `-1` to indicate an error
    * Factorial of `0` is `1`
<br>

4. **4-pow_recursion.c** - returns the value of `x` raised to the power of `y`.
    * Prototype: `int _pow_recursion(int x, int y);`
    * If `y` is lower than `0`, the function should return `-1`
<br>

5. **5-sqrt_recursion.c** - returns the natural square root of a number.
    * Prototype: `int _sqrt_recursion(int n);`
    * If `n` does not have a natural square root, the function should return `-1`
<br>

6. **6-is_prime_number.c** - returns `1` if the input integer is a <a href="https://intranet.alxswe.com/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw">prime number</a>, otherwise return `0`.
    * Prototype: `int is_prime_number(int n);`
<br>

7. **100-is_palindrome.c** -  returns `1` if a string is a palindrome and `0` if not.
    * Prototype: `int is_palindrome(char *s);`
    * An empty string is a palindrome
<br>

8. **101-wildcmp.c** - compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.
    * Prototype: `int wildcmp(char *s1, char *s2);`
    * `s2` can contain the special character `*`.
    * The special char `*` can replace any string (including an empty string)
<br>


### Author
* Siphamandla Matshiane

### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>

