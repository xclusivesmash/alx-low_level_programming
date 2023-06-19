# C - Structures, typedef

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. This repository contains `.c` files created for a deeper understanding of structures in C.

### Learning Objectives
* What are structures, when, why and how to use them
* How to use `typedef`

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://github.com/alx-tools/Betty/tree/master">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The only C standard library functions allowed are `printf`, `malloc`, `free`, and `exit`.
* No more than 5 functions per file.
* The use of global variables is not allowed.
* You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c">_putchar</a>
* All header files should be include guarded.

---
### Scripts

0. **dog.h** - a new type `struct dog` with the following elements:
    * `name`, type = `char *`
    * `age`, type = `float`
    * `owner`, type = `char *`
<br>

1. **1-init_dog.c** - a function that initialize a variable of type `struct dog`
    * Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
<br>

2. **2-print_dog.c** -  a function that prints a `struct dog`
    * Prototype: `void print_dog(struct dog *d);`
    * You are allowed to use the standard library
    * If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
    * If `d` is `NULL` print nothing.
<br>

3. **4-new_dog.c** - a function that creates a new dog.
    * Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
    * You have to store a copy of `name` and `owner`
    * Return `NULL` if the function fails
<br>

4. **5-free_dog.c** - a function that frees dogs (not as in the literal meaning of a dog, only the structure type defines in the `dog.h` header file).
    * Prototype: `void free_dog(dog_t *d);`
<br>

---
### Author
* Siphamandla Matshiane

### LICENSE
<a href="https://www.alxafrica.com/software-engineering/">ALX Software Engineering</a>
