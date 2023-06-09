# C - argc, argv

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills at ALX SE Programme through programming and other technologies. This repository contains `.c` files created for a deeper understanding of argc and argv.

### Learning Objectives
* How to use arguments passed to your program
* What are two prototypes of `main` that you know of, and in which case do you use one or the other
* How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

### Requirements
* Language(s): `C`
* Operating system: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://github.com/alx-tools/Betty/tree/master">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The use of standard library is allowed.
* No more than 5 functions per file.
* The use of global variables is not allowed.
* You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c">_putchar</a>
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `main.h`

---
### Scripts

0. **0-whatsmyname.c** - prints its name, followed by a new line.
    * If you rename the program, it will print the new name, without having to compile it again
    * You should not remove the path before the name of the program
<br>

1. **1-args.c** - prints the number of arguments passed into it.
    * Your program should print a number, followed by a new line
<br>

2. **2-args.c** - prints all arguments it receives.
    * All arguments should be printed, including the first one
    * Only print one argument per line, ending with a new line
<br>

3. **3-mul.c** - multiplies two numbers.
    * Your program should print the result of the multiplication, followed by a new line
    * You can assume that the two numbers and result of the multiplication can be stored in an integer
    * If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`
<br>

4. **4-add.c** - adds positive numbers.
    * Print the result, followed by a new line
    * If no number is passed to the program, print `0`, followed by a new line
    * If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
    * You can assume that numbers and the addition of all the numbers can be stored in an `int`
<br>

5. **100-change.c** - prints the minimum number of coins to make change for an amount of money.
    * Usage: `./change cents`
    * where `cents` is the amount of cents you need to give back
    * if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`
    * you should use `atoi` to parse the parameter passed to your program
    * If the number passed as the argument is negative, print `0`, followed by a new line
    * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
<br>

---
### Author
* Siphamandla Matshiane

### LICENSE
<a href="https://www.alxafrica.com/software-engineering/">ALX Software Engineering</a>
