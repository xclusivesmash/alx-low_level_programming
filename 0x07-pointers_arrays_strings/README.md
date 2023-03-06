C - Even More Pointers, Arrays and Strings

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
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

### Script information
0. **0-memset.c** - fills memory with a constant byte.
    * Prototype: `char *_memset(char *s, char b, unsigned int n);`
    * The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
    * Returns a pointer to the memory area `s`
<br>

1. **1-memcpy.c** -  copies memory area.
    * Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
    * The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
    * Returns a pointer to `dest`
<br>

2. **2-strchr.c** - locates a character in a string.
    * Prototype: `char *_strchr(char *s, char c);`
    * Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found
<br>

3. **3-strspn.c** - gets the length of a prefix substring.
    * Prototype: `unsigned int _strspn(char *s, char *accept);`
    * Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`
<br>

4. **4-strpbrk.c** -  searches a string for any of a set of bytes.
    * Prototype: `char *_strpbrk(char *s, char *accept);`
    * The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
    * Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found
<br>

5. **5-strstr.c** - locates a substring.
    * Prototype: `char *_strstr(char *haystack, char *needle);`
    * The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes `\0)` are not compared
    * Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
<br>

6. **7-print_chessboard.c** - prints the chessboard.
    * Prototype: `void print_chessboard(char (*a)[8]);`
<br>

7. **8-print_diagsums.c** -  prints the sum of the two diagonals of a square matrix of integers.
    * Prototype: `void print_diagsums(int *a, int size);`
    * Example below:
```
julien@ubuntu:~/0x07$ cat 8-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
julien@ubuntu:~/0x07$
```
<br>

8. **100-set_string.c** - sets the value of a pointer to a char.
    * Prototype: `void set_string(char **s, char *to);`
<br>

9. **101-crackme_password** -  Create a file that contains the password for the <a href="https://github.com/holbertonschool/0x06.c">crackme2</a> executable.
    * The file should contain the exact password, no new line, no extra space
    * `ltrace`, `ldd`, `gdb` and `objdump` can help
    * You may need to install the `penssl` library to run the `crakme2` program: `sudo apt install libssl-dev`c
    * Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main`. Then `sudo apt update` and `sudo apt install libssl1.0.0`
<br>

### Author
* Siphamandla Matshiane

### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>

