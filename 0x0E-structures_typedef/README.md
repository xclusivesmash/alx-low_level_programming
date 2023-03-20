# C - Structures, typedef

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing programming skills at ALX SE Programme. This repository has C files created for a deeper understanding of structures in C.

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
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `main.h`

### Learning Objectives
* What are structures, when, why and how to use them
* How to use `typedef`

### Script information
0. **dog.h** - Define a new type `struct` dog with the following elements:
    * `name`, type = `char *`
    * `age`, type = `float`
    * `owner`, type = `char *`
<br>

1. **1-init_dog.c** - initialize a variable of type `struct dog`
    * Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
<br>

2. **2-print_dog.c** - prints a `struct dog`.
    * Prototype: `void print_dog(struct dog *d);`
    * You are allowed to use the standard library
    * If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
    * If `d` is `NULL` print nothing.
    * Format: see example bellow
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 
```
<br>

3. **dog.h** - Define a new type `dog_t` as a new name for the type `struct dog`.
<br>

4. **4-new_dog.c** -  creates a new dog.
    * Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
    * You have to store a copy of `name` and `owner`
    * Return `NULL` if the function fails
<br>

5. **5-free_dog.c** - frees dogs.
    * Prototype: `void free_dog(dog_t *d);`
<br>

---

### Author
* Siphamandla Matshiane

### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>

