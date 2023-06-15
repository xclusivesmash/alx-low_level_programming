# C - More malloc, free

---
### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. This repository contains `.c` files created for a deeper understanding of dynamic memory allocation.

### Learning Objectives
* How to use the `exit` function
* What are the functions `calloc` and `realloc` from the standard library and how to use them

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://github.com/alx-tools/Betty/tree/master">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* No more than 5 functions per file.
* The use of global variables is not allowed.
* You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c">_putchar</a>
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `main.h`

---
### Scripts

0. **0-malloc_checked.c** -  allocates memory using `malloc`.
    * Prototype: `void *malloc_checked(unsigned int b);`
    * Returns a pointer to the allocated memory
    * if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`
<br>

1. **1-string_nconcat.c** - concatenates two strings.
    * Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
    * The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
    * If the function fails, it should return `NULL`
    * If `n` is greater or equal to the length of `s2` then use the entire string `s2`
    * if `NULL` is passed, treat it as an empty string
<br>

2. **2-calloc.c** -  allocates memory for an array, using `malloc`.
    * Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
    * The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
    * The memory is set to zero
    * If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`
    * If `malloc` fails, then `_calloc` returns `NULL`
<br>

3. **3-array_range.c** - creates an array of integers.
    * Prototype: `int *array_range(int min, int max);`
    * The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`
    * Return: the pointer to the newly created array
    * If `min` > `max`, return `NULL`
    * If `malloc` fails, return `NULL`
<br>

4. **100-realloc.c** - reallocates a memory block using `malloc` and `free`
    * Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
    * where `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`
    * `old_size` is the size, in bytes, of the allocated space for `ptr`
    * and `new_size` is the new size, in bytes of the new memory block
    * The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
    * If `new_size` > `old_size`, the “added” memory should not be initialized
    * If `new_size` == `old_size` do not do anything and return `ptr`
    * If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`
    * If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`
    * Don’t forget to free `ptr` when it makes sense
<br>

5. **101-mul.c** - multiplies two positive numbers.
    * Usage: `mul` `num1` `num2`
    * `num1` and `num2` will be passed in base 10
    * Print the result, followed by a new line
    * If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with a status of `98`
    * `num1` and `num2` should only be composed of digits. If not, print `Error`, followed by a new line, and exit with a status of `98`
    * Allowed to use more than 5 functions in your file
<br>

---
### Author
* Siphamandla Matshiane

### LICENSE
<a href="https://www.alxafrica.com/software-engineering/">ALX Software Engineering</a>
