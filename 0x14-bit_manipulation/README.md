# C - Bit manipulation

### Description
> This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. This repository contains `.c` files created for a deeper understanding of bit manipulation in C.

### Learning Objectives
* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators

### Requirements
- Language(s): `C`
- Operating system: `Ubuntu 20.04 LTS`
- Style Guide: <a href="https://github.com/alx-tools/Betty/tree/master">Betty Style</a>
- Allowed editors: `vi`, `vim`, or `emacs`
- Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- No more than 5 functions per file.
- The use of global variables is not allowed.
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- All header files should be include guarded.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`

---
### Scripts

0. **0-binary_to_uint.c** - Write a function that converts a binary number to an `unsigned int`.
    * Prototype: `unsigned int binary_to_uint(const char *b);`
    * where `b` is pointing to a string of `0` and `1` chars
    * Return: the converted number, or 0 if
        * there is one or more chars in the string `b` that is not `0` or `1`
        * `b` is `NULL`
<br>

1. **2-get_bit.c** - Write a function that prints the binary representation of a number.
    * Prototype: `void print_binary(unsigned long int n);`
    * You are not allowed to use arrays
    * You are not allowed to use `malloc`
    * You are not allowed to use the `%` or `/` operators
<br>

2. **2-add_nodeint.c** - Write a function that returns the value of a bit at a given index.
    * Prototype: `int get_bit(unsigned long int n, unsigned int index);`
    * where `index` is the index, starting from `0` of the bit you want to get
    * Return: the value of the bit at index `index` or `-1` if an error occured
<br>

3. **3-set_bit.c** - Write a function that sets the value of a bit to `1` at a given index.
    * Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
    * where `index` is the index, starting from `0` of the bit you want to set
    * Return: `1` if it worked, or `-1` if an error occurred
<br>

4. **4-clear_bit.c** - Write a function that sets the value of a bit to `0` at a given index.
    * Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
    * where `index` is the index, starting from `0` of the bit you want to set
    * Returns: `1` if it worked, or `-1` if an error occurred
<br>

5. **5-flip_bits.c** - Write a function that returns the number of bits you would need to flip to get from one number to another.
    * Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
    * You are not allowed to use the `%` or `/` operators
<br>

6. **100-get_endianness.c** - Write a function that checks the endianness.
    * Prototype: `int get_endianness(void);`
    * Returns: `0` if big endian, `1` if little endian
<br>

7. **101-password** - Find the password for [this program](https://github.com/alx-tools/0x13.c).
    * Save the password in the file `101-password`
    * Your file should contain the exact password, no new line,
 no extra space
<br>

---
### Author
* Siphamandla Matshiane, [![Twitter](http://i.imgur.com/wWzX9uB.png)](https://twitter.com/sbumatshiane916)

### LICENSE
[ALX Software Engineering](https://www.alxafrica.com/software-engineering/)

