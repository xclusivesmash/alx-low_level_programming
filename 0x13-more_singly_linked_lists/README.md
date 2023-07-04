# C - More singly linked lists

### Description
> This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. This repository contains `.c` files created for a deeper understanding of singly linked lists in C.

### Learning Objectives
- When and why using linked lists vs arrays
- How to build and use linked lists

### Requirements
- Language(s): `C`
- Operating system: `Ubuntu 20.04 LTS`
- Style Guide: [Betty Style](https://github.com/holbertonschool/Betty/wiki)
- Allowed editors: `vi`, `vim`, or `emacs`
- Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- No more than 5 functions per file.
- The use of global variables is not allowed.
- You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c">_putchar</a>
- All header files should be include guarded.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`

### Scripts

0. **0-print_listint.c** - Write a function that prints all the elements of a `listint_t` list.
    * Prototype: `size_t print_listint(const listint_t *h);`
    * Return: the number of nodes
    * You are allowed to use `printf`
<br>

1. **1-listint_len.c** - Write a function that returns the number of elements in a linked `listint_t` list.
    * Prototype: `size_t listint_len(const listint_t *h);`
<br>

2. **2-add_nodeint.c** - Write a function that adds a new node at the beginning of a `listint_t` list.
    * Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
    * Return: the address of the new element, or `NULL` if it failed
<br>

3. **3-add_nodeint_end.c** - Write a function that adds a new node at the end of a `listint_t` list.
    * Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
    * Return: the address of the new element, or `NULL` if it failed
<br>

4. **4-free_listint.c** - Write a function that frees a `listint_t` list.
    * Prototype: `void free_listint(listint_t *head);`
<br>

5. **5-free_listint2.c** - Write a function that frees a `listint_t` list.
    * Prototype: `void free_listint2(listint_t **head);`
    * The function sets the **head** to `NULL`
<br>

6. **6-pop_listint.c** - Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
    * Prototype: `int pop_listint(listint_t **head);`
    * if the linked list is empty return `0`
<br>

7. **7-get_nodeint.c** - Write a function that returns the nth node of a `listint_t` linked list.
    * Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
    * where `index` is the index of the node, starting at `0`
    * if the node does not exist, return `NULL`
<br>

8. **8-sum_listint.c** - Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
    * Prototype: `int sum_listint(listint_t *head);`
    * if the linked list is empty return `0`
<br>

9. **9-insert_nodeint.c** - Write a function that inserts a new node at a given position.
    * Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
    * where `idx` is the index of the list where the new node should be added. Index starts at `0`
    * Return: the address of the new node, or `NULL` if it failed
    * if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
<br>

10. **10-delete_nodeint.c** - Write a function that deletes the node at index `index` of a `listint_t` linked list.
    * Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
    * where `index` is the index of the node that should be deleted. Index starts at `0`
    * Returns: `1` if it succeeded, `-1` if it failed
<br>

11. **100-reverse_listint.c** - Write a function that reverses a `listint_t` linked list.
    * Prototype: `listint_t *reverse_listint(listint_t **head);`
    * Returns: a pointer to the first node of the reversed list
    * You are not allowed to use more than `1` loop.
    * You are not allowed to use `malloc`, `free` or arrays
    * You can only declare a maximum of two variables in your function
<br>

12. **101-print_listint_safe.c** - Write a function that prints a `listint_t` linked list.
    * Prototype: `size_t print_listint_safe(const listint_t *head);`
    * Returns: the number of nodes in the list
    * This function can print lists with a loop
    * You should go through the list only once
    * If the function fails, exit the program with status `98`
<br>

13. **102-free_listint_safe.c** - Write a function that frees a `listint_t` list.
    * Prototype: `isize_t free_listint_safe(listint_t **h);`
    * This function can free lists with a loop
    * You should go though the list only once
    * Returns: the size of the list that was free’d
    * The function sets the **head** to NULL
<br>

14. **103-find_loop.c** - Write a function that finds the loop in a linked list.
    * Prototype: `listint_t *find_listint_loop(listint_t *head);`
    * Returns: The address of the node where the loop starts, or `NULL` if there is no loop
    * You are not allowed to use `malloc`, `free` or arrays
    * You can only declare a maximum of two variables in your function
<br

---
### Author
* Siphamandla Matshiane, [![Twitter](http://i.imgur.com/wWzX9uB.png)](https://twitter.com/sbumatshiane916)
### LICENSE
<a href="https://www.alxafrica.com/software-engineering/">ALX Software Engineering</a>
