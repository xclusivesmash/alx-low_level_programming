# C - Singly linked lists

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. This repository contains `.c` files created for a deeper understanding of singly linked lists in C.

### Learning Objectives
* When and why using linked lists vs arrays
* How to build and use linked lists

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
* All header files should be include guarded.
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`

---
### Scripts

0. **0-print_list.c** - Write a function that prints all the elements of a `list_t` list.
    * Prototype: `size_t print_list(const list_t *h);`
    * Return: the number of nodes
    * If `str` is `NULL`, print `[0] (nil)`
    * You are allowed to use `printf`
<br>

1. **1-list_len.c** - Write a function that returns the number of elements in a linked `list_t` list.
    * Prototype: `size_t list_len(const list_t *h);`
<br>

2. **2-add_node.c** - Write a function that adds a new node at the beginning of a `list_t` list.
    * Prototype: `list_t *add_node(list_t **head, const char *str);`
    * Return: the address of the new element, or `NULL` if it failed
    * `str` needs to be duplicated
    * You are allowed to use `strdup`
<br>

3. **3-add_node_end.c** - Write a function that adds a new node at the end of a `list_t` list.
    * Prototype: `list_t *add_node_end(list_t **head, const char *str);`
    * Return: the address of the new element, or `NULL` if it failed
    * `str` needs to be duplicated
    * You are allowed to use `strdup`
<br>

4. **4-free_list.c** - Write a function that frees a `list_t` list.
    * Prototype: `void free_list(list_t *head);`
<br>

5. **100-first.c** - Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
    * You are allowed to use the `printf` function
<br>

6. **101-hello_holberton.asm** - Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.
    * You are only allowed to use the `printf` function
    * You are not allowed to use interrupts
    * Your program will be compiled using `nasm` and `gcc`.
<br>

---
### Author
* Siphamandla Matshiane

### LICENSE
<a href="https://www.alxafrica.com/software-engineering/">ALX Software Engineering</a>
