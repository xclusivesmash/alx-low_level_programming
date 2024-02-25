# C - Makefiles

## Description
> The files in this repository are created to enforce a deeper understanding of makefiles.

## Learning Objectives
- What are `make`, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

## Requirements
- OS: `Ubuntu 20.04 LTS`
- Version of `gcc`: 9.3.0
- Version of `make`: GNU Make 4.2.1
- Allowed editors: `vi`, `vim`, `emacs`

## Scripts
0. **0-Makefile** - first created makefile.
    - Requirements:
        * name of the executable: `school`
        * rules: `all`
            * The `all` rule builds your executable
        * variables: none
<br>

1. **1-Makefile**
    - Requirements:
        * name of the executable: `school`
        * rules: `all`
            * The `all` rule builds your executable
        * variables: `CC`, `SRC`
            * `CC`: the compiler to be used
            * `SRC`: the `.c` files
<br>

2. **2-Makefile** - First useful makefile.
    - Requirements:
        * name of the executable: `school`
        * rules: `all`
            * The `all` rule builds your executable
        * variables: `CC`, `SRC`, `OBJ`, `NAME`
            * `CC`: the compiler to be used
            * `SRC`: the `.c` files
            * `OBJ`: the `.o` files
            * `NAME`: the name of the executable
        * The `all` rule should recompile only the updated source files
        * You are not allowed to have a list of all the `.o` files
<br>

3. **3-Makefile**
    - Requirements:
        * name of the executable: `school`
        * rules: `all`, `clean`, `oclean`, `fclean`, `re`
            * `all`: builds your executable
            * `clean`: deletes all Emacs and Vim temporary files along with the executable
            * `oclean`: deletes the object files
            * `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
            * `re`: forces recompilation of all source files
        * variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
            * `CC`: the compiler to be used
            * `SRC`: the `.c` files
            * `OBJ`: the `.o` files
            * `NAME`: the name of the executable
            * `RM`: the program to delete files
        * The `all` rule should recompile only the updated source files
        * The `clean`, `oclean`, `fclean`, `re` rules should never fail
        * You are not allowed to have a list of all the `.o` files
<br>

4. **4-Makefile**
    - Requirements:
        * name of the executable: `school`
        * rules: `all`, `clean`, `fclean`, `oclean`, `re`
            * `all`: builds your executable
            * `clean`: deletes all Emacs and Vim temporary files along with the executable
            * `oclean`: deletes the object files
            * `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object file    s
            * `re`: forces recompilation of all source files
        * variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
            * `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
        * The `all` rule should recompile only the updated source files
        * The `clean`, `oclean`, `fclean`, `re` rules should never fail
        * You are not allowed to have a list of all the `.o` files
<br>

5.  **5-island_perimeter.py** - Technical interview preparation
    - You are not allowed to google anything
    - Whiteboard first
    - Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`
        * `grid` is a list of list of integers:
            * 0 represents a water zone
            * 1 represents a land zone
            * One cell is a square with side length 1
            * Grid cells are connected horizontally/vertically (not diagonally).
            * Grid is rectangular, width and height don’t exceed 100
        * Grid is completely surrounded by water, and there is one island (or nothing).
        * The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
        * Requirements:
            - First line contains `#!/usr/bin/python3`
            - You are not allowed to import any module
            - Module and function must be documented
<br>

## Author
- Siphamandla Matshiane, [![X](http://i.imgur.com/wWzX9uB.png)](https://www.twitter.com/sbumatshiane916)

## LICENSE
- [ALX Software Engineering](https://www.alxafrica.com/software-engineering)
