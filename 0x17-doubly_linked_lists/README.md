# C - Doubly linked lists

## Description
> This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. The `.c` files created are for a deeper understanding of doubly linked lists.

## Learning Objectives
* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

## Requirements

### General
- Allowed editors: `vi`, `vim`, or `emacs`
- All files should end with a new line

### C Language
- Operating system: `Ubuntu 20.04 LTS`
- Style Guide: [Betty Style](https://github.com/alx-tools/Betty/tree/master)
- Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No more than 5 functions per file.
- The use of global variables is not allowed.
- All header files should be include guarded.
- The prototypes of all your functions and the prototype of the function should be included in your header file called `lists.h`

## Scripts
0. **0-square_matrix_simple.py** - Write a function that prints all the elements of a `dlistint_t` list.
    * Prototype: `size_t print_dlistint(const dlistint_t *h);`
    * Return: the number of nodes
<br>

1. **1-search_replace.py** - Write a function that returns the number of elements in a linked `dlistint_t` list.
    * Prototype: `size_t dlistint_len(const dlistint_t *h);`
<br>


2. **2-uniq_add.py** - Write a function that adds a new node at the beginning of a `dlistint_t` list.
    * Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
    * Return: the address of the new element, or `NULL` if it failed
<br>

3. **3-common_elements.py** - Write a function that adds a new node at the end of a `dlistint_t` list.
    * Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
    * Return: the address of the new element, or `NULL` if it failed
<br>

4. **4-only_diff_elements.py** - Write a function that frees a `dlistint_t` list.
    * Prototype: `void free_dlistint(dlistint_t *head);`
<br>

5. **5-number_keys.py** - Write a function that returns the nth node of a `dlistint_t` linked list.
    * Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
    * where `index` is the index of the node, starting from `0`
    * if the node does not exist, return `NULL`
<br>

6. **6-print_sorted_dictionary.py** - Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
    * Prototype: `int sum_dlistint(dlistint_t *head);`
    * if the list is empty, return `0`
<br>

7. **7-update_dictionary.py** - Write a function that inserts a new node at a given position.
    * Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
    * where `idx` is the index of the list where the new node should be added. Index starts at `0`
    * Returns: the address of the new node, or `NULL` if it failed
    * if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
<br>

8. **8-simple_delete.py** - Write a function that deletes the node at index `index` of a `dlistint_t` linked list.
    * Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
    * where `index` is the index of the node that should be deleted. Index starts at `0`
    * Returns: `1` if it succeeded, `-1` if it failed
<br>

9. **9-multiply_by_2.py** - Find the password for [crackme4](https://github.com/alx-tools/0x17.c).
    * Save the password in the file `100-password`
    * Your file should contain the exact password, no new line, no extra space
    * Hint: The program prints “OK” when the password is correct
<br>

10. **10-best_score.py** - Find the largest palindrome made from the product of two 3-digit numbers.
    * Save the result in the file `102-result`
    * Your file should contain the exact result, no new line, no extra space
<br>

11. **11-multiply_list_map.py** - Write a keygen for [crackme5](https://github.com/alx-tools/0x17.c).
    * Usage of the crackme: `./crackme5 username key`
    * The crackme will segfault if you do not enter the correct key for the user
    * Usage for your keygen: `./keygen5 username`
    * Your keygen should print a valid key for the `username`
<br>

## Author
* Siphamandla Matshiane, [![Twitter](http://i.imgur.com/wWzX9uB.png)](https://twitter.com/sbumatshiane916)

## LICENSE
[ALX Software Engineering](https://www.alxafrica.com/software-engineering/)
