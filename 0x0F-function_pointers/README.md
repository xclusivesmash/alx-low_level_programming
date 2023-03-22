# C - Function pointers

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing programming skills at ALX SE Programme. This repository has C files created for a deeper understanding of function pointers in C.

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
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `function_pointers.h`
* All header files should be include guarded

### Learning Objectives
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

### Script information
0. **0-print_name.c** - a function that prints a name.
    * Prototype: `void print_name(char *name, void (*f)(char *));`
<br>

1. **1-array_iterator.c** - executes a function given as a parameter on each element of an array.
    * Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
    * where `size` is the size of the array
    * and `action` is a pointer to the function you need to use
<br>

2. **2-int_index.c** - searches for an integer.
    * Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
    * where `size` is the number of elements in the `array`
    * `cmp` is a pointer to the function to be used to compare values
    * `int_index returns` the index of the first element for which the `cmp` function does not return `0`
    * If no element matches, return `-1`
    * If size <= `0`, return `-1`
<br>

3. **3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h** -  performs simple operations.
    * You are allowed to use the standard library
    * Usage: `calc num1 operator num2`
    * You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
    * `operator` is one of the following:
        * `+`: addition
        * `-`: subtraction
        * `*`: multiplication
        * `/`: division
        * `%`: modulo
    * The program prints the result of the operation, followed by a new line
    * You can assume that the result of all operations can be stored in an `int`
    * if the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
    * if the `operator` is none of the above, print `Error`, followed by a new line, and exit with the status `99`
    * if the user tries to divide (`/` or `%`) by `0`, print `Error`, followed by a new line, and exit with the status `100`
    * This task requires that you create four different files.
    * **3-calc.h**:
        * This file should contain all the function prototypes and data structures used by the program. You can use this structure:
```
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

    * **3-op_functions.c**:
        * This file should contain the 5 following functions (not more):
            * `op_add`: returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b);`
            * `op_sub`: returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b);`
            * `op_mul`: returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b);`
            * `op_div`: returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b);`
            * `op_mod`: returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b);`

    * **3-get_op_func.c**:
        * This file should contain the function that selects the correct function to perform the operation asked by the user.
        * You’re not allowed to declare any other function.
            * Prototype: `int (*get_op_func(char *s))(int, int);`
            * where `s` is the operator passed as argument to the program
            * This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`
            * You are not allowed to use `switch` statements
            * You are not allowed to use `for` or `do ... while` loops
            * You are not allowed to use `goto`
            * You are not allowed to use `else`
            * You are not allowed to use more than one `if` statement in your code
            * You are not allowed to use more than one `while` loop in your code
            * If `s` does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`
            * You are only allowed to declare these two variables in this function

    * **3-main.c**:
        * This file should contain your `main` function only.
            * You are not allowed to code any other function than `main` in this file
            * You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div` or `op_mod` from the `main` function
            * You have to use `atoi` to convert arguments to `int`
            * You are not allowed to use any kind of loop
            * You are allowed to use a maximum of 3 `if` statements
<br>

4. **100-main_opcodes.c** -  prints the <a href="https://intranet.alxswe.com/rltoken/5eSu8Ohx0ddeNGmaeDo_zQ">opcodes</a> of its own main function.
    * Usage: `./main number_of_bytes`
    * Output format:
        * the opcodes should be printed in hexadecimal, lowercase
        * each opcode is two char long
        * listing ends with a new line
        * see example
    * You are allowed to use `printf` and `atoi`
    * You have to use `atoi` to convert the argument to an `int`
    * If the number of argument is not the correct one, print `Error`, followed by a new line, and exit with the status `1`
    * If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
    * You do not have to compile with any flags
<br>

---

### Author
* Siphamandla Matshiane
### LICENSE
* <a href="https://www.holbertonschool.com/">ALX SE Programme</a>

