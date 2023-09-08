# C - Hash tables

## Description
> This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. The `.c` files created are for a deeper understanding of hash tables implememted in C.

## Learning Objectives
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Requirements

### General
- Allowed editors: `vi`, `vim`, or `emacs`
- All files should end with a new line
- Operating system: `Ubuntu 20.04 LTS`
- The length of all files will be tested using `wc`

### C Language
- Operating system: `Ubuntu 20.04 LTS`
- Style Guide: [Betty Style](https://github.com/alx-tools/Betty/tree/master)
- Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No more than 5 functions per file.
- The use of global variables is not allowed.
- All header files should be include guarded.
- The prototypes of all your functions should be included in your header file called `hash_tables.h`

## Scripts

0. **0-hash_table_create.c** - Write a function that creates a hash table.
    * Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
        * where `size` is the size of the array
    * Returns a pointer to the newly created hash table
    * If something went wrong, your function should return `NULL`
<br>

1. **1-djb2.c** - Write a hash function implementing the djb2 algorithm.
    * Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
    * You are allowed to copy and paste the function from [this page](https://intranet.alxswe.com/rltoken/3B7lCUBD4yZh66Pbl2KcEQ)
<br>

2. **2-key_index.c** - Write a function that gives you the index of a key.
    * Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
        * where `key` is the key
        * and `size` is the size of the array of the hash table
    * This function should use the `hash_djb2` function that you wrote earlier
    * Returns the index at which the key/value pair should be stored in the array of the hash table
    * You will have to use this hash function for all the next tasks
<br>

3. **3-hash_table_set.c** - Write a function that adds an element to the hash table.
    * Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
        * Where `ht` is the hash table you want to add or update the key/value to
        * `key` is the `key`. key can not be an empty string
        * and `value` is the value associated with the key. `value` must be duplicated. `value` can be an empty string
    * Returns: `1` if it succeeded, `0` otherwise
    * In case of collision, add the new node at the beginning of the list
<br>

4. **4-hash_table_get.c** - Write a function that retrieves a value associated with a key.
    * Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
        * where `ht` is the hash table you want to look into
        * and `key` is the key you are looking for
    * Returns the value associated with the element, or `NULL` if `key` couldn’t be found
<br>

5. **5-hash_table_print.c** - Write a function that prints a hash table.
    * Prototype: `void hash_table_print(const hash_table_t *ht);`
        * where `ht` is the hash table
    * You should print the key/value in the order that they appear in the array of hash table
        * Order: array, list
    * If `ht` is NULL, don’t print anything
<br>

6. **6-hash_table_delete.c** - Write a function that deletes a hash table.
    * Prototype: `void hash_table_delete(hash_table_t *ht);`
        * where `ht` is the hash table
<br>

7. **100-sorted_hash_table.c** - For this task, please:
    * Read [PHP Internals Book: HashTable](https://intranet.alxswe.com/rltoken/SIdpN9PE_9aYBCHUGPX-fw)
    * Use the same hash function
    * Use these data structures:
```/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
```
7. **Continuation...** - do the following:
    * Rewrite the previous functions using these data structures:
        * `shash_table_t *shash_table_create(unsigned long int size);`
        * `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
            * The key/value pair should be inserted in the sorted list at the right place
            * Note that here we do not want to do exactly like `PHP`: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it.
        * `char *shash_table_get(const shash_table_t *ht, const char *key);`
        * `void shash_table_print(const shash_table_t *ht);`
            * Should print the hash table using the sorted linked list
        * `void shash_table_print_rev(const shash_table_t *ht);`
            * Should print the hash tables key/value pairs in reverse order using the sorted linked list
        * `void shash_table_delete(shash_table_t *ht);`
        * You are allowed to have more than 5 functions in your file
<br>


## Author
* Siphamandla Matshiane, [![Twitter](http://i.imgur.com/wWzX9uB.png)](https://twitter.com/sbumatshiane916)

## LICENSE
[ALX Software Engineering](https://www.alxafrica.com/software-engineering/)
