# C - Singly linked lists

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing programming skills at ALX SE Programme. This repository has C files created for a deeper understanding of linked lists in C.

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://intranet.alxswe.com/rltoken/wQ4sMfsWfxvyfN67Sc11zA">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, etc… is forbidden.
* No more than 5 functions per file.
* The use of global variables is not allowed.
* The use of <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar</a> is allowed.
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `lists.h`
* All header files should be include guarded

### Learning Objectives
* When and why using linked lists vs arrays
* How to build and use linked lists

### Script information
0. **0-print_list.c** - prints all the elements of a `list_t` list.
    * Prototype: `size_t print_list(const list_t *h);`
    * Return: the number of nodes
    * If `str` is `NULL`, print `[0] (nil)`
    * You are allowed to use `printf`
<br>

1. **1-list_len.c** - returns the number of elements in a linked `list_t` list.
    * Prototype: `size_t list_len(const list_t *h);`
<br>

2. **2-add_node.c** - adds a new node at the beginning of a `list_t` list.
    * Prototype: `list_t *add_node(list_t **head, const char *str);`
    * Return: the address of the new element, or `NULL` if it failed
    * `str` needs to be duplicated
    * You are allowed to use `strdup`
<br>

3. **3-add_node_end.c** - adds a new node at the end of a `list_t` list.
    * Prototype: `list_t *add_node_end(list_t **head, const char *str);`
    * Return: the address of the new element, or `NULL` if it failed
    * `str` needs to be duplicated
    * You are allowed to use `strdup`
<br>

4. **4-free_list.c** - frees a `list_t` list.
    * Prototype: `void free_list(list_t *head);`
<br>

5. **100-first.c** - prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
    * You are allowed to use the `printf` function
<br>

6. **101-hello_holberton.asm** - Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.
    * You are only allowed to use the `printf` function
    * You are not allowed to use interrupts
    * Your program will be compiled using `nasm` and `gcc`
---

### Author
* Siphamandla Matshiane
### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>

