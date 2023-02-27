# C - Pointers, Arrays and Strings

### This repository is cretaed as part of the learning process for low level programming at ALX SE Programme. The scripts created in this project are part of the learning curriculum at ALX SE Programme.

### Requirements
* Langauge(s): `C`
* Operating System: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://intranet.alxswe.com/rltoken/wQ4sMfsWfxvyfN67Sc11zA">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* All the files must be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* No use of the standard library is allowed. Any use of functions like `printf`, `puts`, etc… is forbidden
* Only <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar</a>
* The prototypes of all the functions and the prototype of the function `_putchar` is included in the header file called `main.h`

### Learning Objectives
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

### Script Information
0. **0-reset_to_98.c** - takes a pointer to an `int` as parameter and updates the value it points to to `98`.
    * Prototype: `void reset_to_98(int *n);`<br>

1. **1-swap.c** - swaps the values of two integers.
    * Prototype: `void swap_int(int *a, int *b);`<br>

2. **2-strlen.c** - returns the length of a string.
    * Prototype: `int _strlen(char *s);`<br>

3. **3-puts.c** - prints a string, followed by a new line, to `stdout`.
    * Prototype: `void _puts(char *str);`<br>

4. **4-print_rev.c** - prints a string, in reverse, followed by a new line.
    * Prototype: `void print_rev(char *s);`<br>

5. **5-rev_string.c** - reverses a string.
    * Prototype: `void rev_string(char *s);`<br>

6. **6-puts2.c** - prints every other character of a string, starting with the first character, followed by a new line.
    * Prototype: `void puts2(char *str);`<br>

7. **7-puts_half.c** - prints half of a string, followed by a new line.
    * Prototype: `void puts_half(char *str);`
    * The function should print the second half of the string
    * If the number of characters is odd, the function should print the last n characters of the string, where `n = (length_of_the_string - 1) / 2`<br>

8. **8-print_array.c** - prints `n` elements of an array of integers, followed by a new line.
    * Prototype: `void print_array(int *a, int n);`
    * where `n` is the number of elements of the array to be printed
    * Numbers must be separated by comma, followed by a space
    * The numbers should be displayed in the same order as they are stored in the array
    * You are allowed to use `printf`<br>

9. **9-strcpy.c** - copies the string pointed to by `src`, including the terminating null byte `(\0)`, to the buffer pointed to by `dest`.
    * Prototype: `char *_strcpy(char *dest, char *src);`
    * Return value: the pointer to `dest`<br>

10. **100-atoi.c** - convert a string to an integer.
    * Prototype: `int _atoi(char *s);`
    * The number in the string can be preceded by an infinite number of characters
    * You need to take into account all the `-` and `+` signs before the number
    * If there are no numbers in the string, the function must return `0`
    * You are not allowed to use `long`
    * You are not allowed to declare new variables of “type” array
    * You are not allowed to hard-code special values
    * This gcc flag `-fsanitize=signed-integer-overflow` will be used to compile the code.<br>

11. **101-keygen.c** - generates random valid passwords for the program <a href="https://github.com/holbertonschool/0x04.c">101-crackme</a>.
    * You are allowed to use the standard library
    * You don’t have to pass the `betty-style tests` (you still need to pass the `betty-doc` tests)
    * man `srand`, `rand`, `time`
    * `gdb` and `objdump` can help<br.

### Authors
* Siphamandla Matshiane

### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>
