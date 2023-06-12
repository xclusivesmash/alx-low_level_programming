# C - malloc, free

---
### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. This repository contains `.c` files created for a deeper understanding of dynamic memory allocation.

### Learning Objectives
* What is the difference between automatic and dynamic allocation
* What is `malloc` and `free` and how to use them
* Why and when use `malloc`
* How to use `valgrind` to check for memory leak

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://github.com/alx-tools/Betty/tree/master">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* No more than 5 functions per file.
* The use of global variables is not allowed.
* You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c">_putchar</a>
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `main.h`

---
### Scripts

0. **0-create_array.c** - creates an array of chars, and initializes it with a specific char.
    * Prototype: `char *create_array(unsigned int size, char c);`
    * Returns `NULL` if size = `0`
    * Returns a pointer to the array, or `NULL` if it fails
<br>

1. **1-strdup.c** - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
    * Prototype: `char *_strdup(char *str);`
    * The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
    * Returns `NULL` if str = NULL
    * On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available
<br>

2. **2-str_concat.c** - concatenates two strings.
    * Prototype: `char *str_concat(char *s1, char *s2);`
    * The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
    * if `NULL` is passed, treat it as an empty string
    * The function should return `NULL` on failure
<br>

3. **3-alloc_grid.c** - returns a pointer to a 2 dimensional array of integers.
    * Prototype: `int **alloc_grid(int width, int height);`
    * Each element of the grid should be initialized to `0`
    * The function should return `NULL` on failure
    * If `width` or `height` is `0` or negative, return `NULL`
<br>

4. **4-free_grid.c** - frees a 2 dimensional grid previously created by your `alloc_grid` function.
    * Prototype: `void free_grid(int **grid, int height);`
<br>

5. **100-argstostr.c** -  concatenates all the arguments of your program.
    * Prototype: `char *argstostr(int ac, char **av);`
    * Returns `NULL` if `ac == 0` or `av == NULL`
    * Returns a pointer to a new string, or `NULL` if it fails
    * Each argument should be followed by a `\n` in the new string
<br>

6. **101-strtow.c** - splits a string into words.
    * Prototype: `char **strtow(char *str);`
    * The function returns a pointer to an array of strings (words)
    * Each element of this array should contain a single word, null-terminated
    * The last element of the returned array should be `NULL`
    * Words are separated by spaces
    * Returns `NULL` if `str == NULL` or `str == ""`
    * If the function fails, it should return `NULL`
<br>

---
### Author
* Siphamandla Matshiane

### LICENSE
<a href="https://www.alxafrica.com/software-engineering/">ALX Software Engineering</a>
