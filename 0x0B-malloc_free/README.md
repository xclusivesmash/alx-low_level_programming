# C - malloc, free

### Description
The porject focuses on memory allocation in C, the difference between automatic memory allocation vs. dynamic memory allocation. This is a requirement as part of learning programming logic through C via ALX SE programme.

### Requirements
* Languages: C
* OS: Ubuntu 20.04 LTS
* Style Guide: <a href="https://github.com/holbertonschool/Betty/wiki">Betty Style</a>
* Allowed Editors: ```vi```, ```vim```, or ```emacs```.

### Concepts
* What is the difference between automatic and dynamic memory allocation
* What is ```malloc``` and ```free``` and how to use them
* Why and when to use ```malloc```
* How to use ```vakgrind``` to check for memory leak

### Scripts
1. **0-create_array.c** - creates an array of chars, and initializes it with a specific char. Returns ```NULL``` if ```size``` is zero. Returns a pointer to the array, or ```NULL``` if it fails.<br>
2. **1-strdup.c** - returns a pointer to the newly allocated space in memory, which contains a copy of the string given as a parameter. Returns ```NULL``` if str is ```NULL```. On success, returns a pointer to the duplicated string. It returns ```NULL``` if insufficient memory was unavailable.<br>
3. **2-str_concat.c** - concatenates two strings. The returned pointer should point to the newly allocated space in memory, containing the contents of ```s1```, followed by the contents of ```s2``` and null terminated. If ```NULL``` is passed, it will be treated as an empty string. On failure, return ```NULL```.<br>
4. **3-alloc_grid.c** - returns a pointer to a 2-dimensional array of integers. Each element of grid should be initialized to ```0```. The function should return ```NULL``` on failure. If ```width``` or ```height``` is zero or negative, return ```NULL```.<br>
5. **4-free_grid.c** - frees a 2-dimensional grid previously created by the function ```alloc_grid```.<br>
6. **100-argstostr.c** - concatenates all argument of your program. Returns a pointer to the new string or ```NULL``` if it fails. Each argument should be followed by a ```\n``` in the newstring.<br>
7. **101-strtow.c** - splits a tring into words. Returns a pointer to an array of strings (words). The last element of the array should be ```NULL```. Returns ```NULL``` if ```str==NULL``` or ```str==""```. On failure, it should return ```NULL```.<br>

### Authors
* Siphamandla Matshiane

### License
* The Holberton School/ALX SE Programme
