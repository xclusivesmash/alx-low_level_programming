# C - More Pointers, Arrays and Strings

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing programming skills at ALX SE Programme. This repository has C files created for a deeper understanding of Pointers.

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden.
* No more than 5 functions per file.
* The use of global variables is not allowed.
* You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar</a>
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `main.h`

### Learning Objectives
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

### Script information
0. **0-strcat.c** - concatenates two strings.
    * Prototype: `char *_strcat(char *dest, char *src);`
    * This function appends the `src` string to the dest string, overwriting the terminating null byte `(\0)` at the end of `dest`, and then adds a terminating null byte
    * Returns a pointer to the resulting string `dest`
<br>

1. **1-strncat.c** -  concatenates two strings. 
    * Prototype: `char *_strncat(char *dest, char *src, int n);`
    * The `_strncat` function is similar to the `_strcat` function, except that:
        * it will use at most `n` bytes from `src`; and
        * `src` does not need to be null-terminated if it contains `n` or more bytes
    * Return a pointer to the resulting string `dest`
<br>

2. **2-strncpy.c** - copies a string.
    * Prototype: `char *_strncpy(char *dest, char *src, int n);`
    * Should work exactly like `stncpy`
<br>

3. **3-strcmp.c** - compares two strings.
    * Prototype: `int _strcmp(char *s1, char *s2);`
    * Should work exactly like `strcmp`
<br>

4. **4-rev_array.c** - reverses the content of an array of integers.
    * Prototype: `void reverse_array(int *a, int n);`
    * Where `n` is the number of elements of the array
<br>

5. **5-string_toupper.c** - changes all lowercase letters of a string to uppercase.
    * Prototype: `char *string_toupper(char *);`
<br>

6. **6-cap_string.c** - capitalizes all words of a string.
    * Prototype: `char *cap_string(char *);`.
    * Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`
<br>

7. **7-leet.c** - encodes a string into <a href="https://intranet.alxswe.com/rltoken/9v9KfpvWnL0GoMu5mozbug">1337</a>
    * Prototype: `char *leet(char *);`
    * Letters `a` and `A` should be replaced by `4`
    * Letters `e` and `E` should be replaced by `3`
    * Letters `o` and `O` should be replaced by `0`
    * Letters `t` and `T` should be replaced by `7`
    * Letters `l` and `L` should be replaced by `1`
    * You can only use one `if` in your code
    * You can only use two loops in your code
    * You are not allowed to use `switch`
    * You are not allowed to use any ternary operation
<br>

8. **100-rot13.c** - encodes a string using <a href="https://intranet.alxswe.com/rltoken/YRxmNA7BnP6yZhl09TKX3A">rot13</a>.
    * Prototype: `char *rot13(char *);`
    * You can only use one `if` in your code
    * You can only use two loops in your code
    * You are not allowed to use `switch`
    * You are not allowed to use any ternary operation
<br>

9. **101-print_number.c** -  prints an integer.
    * Prototype: `void print_number(int n);`
    * You can only use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar</a> function to print
    * You are not allowed to use `long`
    * You are not allowed to use arrays or pointers
    * You are not allowed to hard-code special values
<br>

10. **102-magic.c** - the program prints `a[2] = 98`, followed by a new line.
    * Add one line to <a href="https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c">this code</a>, to fulfil the above purpose.
    * You are not allowed to use the variable `a` in your new line of code
    * You are not allowed to modify the variable `p`
    * You can only write one statement
    * You are not allowed to use `,`
    * You are not allowed to code anything else than the line of expected line of code at the expected line
    * Your code should be written at line 19, before the `;`
    * Do not remove anything from the initial code (not even the comments)
    * and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
    * You are allowed to use the standard library
<br>

11. **103-infinite_add.c** - adds two numbers.
    * Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`
    * Where `n1` and `n2` are the two numbers
    * `r` is the buffer that the function will use to store the result
    * `size_r` is the buffer size
    * The function returns a pointer to the result
    * You can assume that you will always get positive numbers, or `0`.
    * You can assume that there will be only digits in the strings `n1` and `n2`
    * `n1` and `n2` will never be empty
    * If the result can not be stored in `r` the function must return `0`
<br>

12. **104-print_buffer.c** - prints a buffer.
    * Prototype: `void print_buffer(char *b, int size);`
    * The function must print the content of `size` bytes of the buffer pointed by `b`
    * The output should print 10 bytes per line
    * Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with `0`
    * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
    * Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print `.`
    * Each line ends with a new line `\n`
    * If size is `0` or less, the output should be a new line only `\n`
    * You are allowed to use the standard library
<br>

### Author
* Siphamandla Matshiane

### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>

