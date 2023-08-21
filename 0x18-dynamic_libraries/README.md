# C - Dynamic libraries

## Description
> This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills through programming and other technologies. The `.c` files created are for a deeper understanding of dynamic libraries.

## Learning Objectives
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable `$LD_LIBRARY_PATH` and how to use it
* What are the differences between static and shared libraries
* Basic usage `nm`, `ldd`, `ldconfig`

## Requirements

### General
- Allowed editors: `vi`, `vim`, or `emacs`
- All files should end with a new line
- Operating system: `Ubuntu 20.04 LTS`

### C Language

- Style Guide: [Betty Style](https://github.com/alx-tools/Betty/tree/master)
- Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No more than 5 functions per file.
- The use of global variables is not allowed.
- All header files should be include guarded.
- The prototypes of all your functions and the prototype of the function should be included in your header file called `main.h`

### Bash
- The first line of all files should be exactly `#!/bin/bash`
- All your files must be executable

## Scripts
0. **libdynamic.so, main.h** - Create the dynamic library libdynamic.so containing all the functions listed below:
```int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

<br>

1. **1-create_dynamic_lib.sh** - Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.
<br>

2. **100-operations.so** - Create a dynamic library that contains C functions that can be called from Python.
<br>

3. **101-make_me_win.sh** - I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
    * Our mole got us a copy of the program, you can download it [here](https://github.com/alx-tools/0x18.c). Our mole also gave us a piece of documentation:
```/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
```

<br>

    * You can’t modify the program `gm` itself as Master Sysadmin Sylvain (MSS) always checks its [MD5](https://intranet.alxswe.com/rltoken/uFp7pQzfyzDA7z2cVOKIaQ) before running it
    * The system is an `Linux Ubuntu 16.04`
    * The server has internet access
    * Our mole will be only able to run two commands from a shell script, without being detected by MSS
    * Your shell script should be maximum 3 lines long. You are not allowed to use `;`, `&&`, `||`, `|`, ` (it would be detected by MSS), and have a maximum of two commands
    * Our mole has only the authorization to upload one file on the server. It will be your shell script
    * Our mole will run your shell script this way: ``mss@gm_server$ . ./101-make_me_win.sh`
    * Our mole will run your shell script from the same directory containing the program `gm`, exactly 98 seconds before MSS runs gm with my numbers: `./gm 9 8 10 24 75 9`
    * MSS will use the same terminal and session than our mole
    * Before running the `gm` program, MSS always check the content of the directory
    * MSS always exit after running the program `gm`
    * TL;DR; This is what is going to happen
<br>

## Author
* Siphamandla Matshiane, [![Twitter](http://i.imgur.com/wWzX9uB.png)](https://twitter.com/sbumatshiane916)

## LICENSE
[ALX Software Engineering](https://www.alxafrica.com/software-engineering/)
