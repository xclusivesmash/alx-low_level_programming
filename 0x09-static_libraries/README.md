# C - Static Libraries

### Description
This repository contains scripts that are created as part of the learning objectives of programming at ALX SE programme. The emphasis is on enforcing problem solving skills at ALX SE Programme through programming and other technologies. This repository contains files created for a deeper understanding of static libraries.

### Learning Objectives
* What is a static library?
* How does it work?
* How to create a static library?
* How to use a statuc library?
* Basic usage of `ar`, `ranlib`, and `nm`.

### Requirements
* Language(s): `C` and `Bash`
* Operating system: `Ubuntu 20.04 LTS`
* Style Guide: <a href="https://github.com/alx-tools/Betty/tree/master">Betty Style</a>
* Allowed editors: `vi`, `vim`, or `emacs`
* Compilation should be achieved using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden.
* You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c">_putchar</a>
* The prototypes of all the functions and the prototype of the function `_putchar` are included in the header file called `main.h`
* All Bash files must start with the line `#!/bin/bash` and must be executable files.

---
### Scripts
0. **libmy.a** - a library (static) containing all the object files generated from `.c` files.
<br>
1. **create_static_lib.sh** - Bash file that creates a static library called `liball.a` from all the `.c` files in the curretn directory.
<br>

### Additional notes.
To use a static library when running a program perform the following command:
* `gcc [filename] -L[directory] -l[libname] -o [output_filename]`

* **Note** - `filename` is the name of the file to be compiled. `directory` is where the created library is located. `libname`is the name of the library to be used. If the library is called `libmy.a`, you can ommit the prefix `lib` and the suffix `.a` since the linker adds them back during compilation. `output_filename` is the name of your executable file. If the `-o` option is not specified, by default you get `a.out` on unix system.

---
### Author
* Siphamandla Matshiane

### LICENSE
<a href="https://www.alxafrica.com/software-engineering/">ALX Software Engineering</a>
