> # 0x0B. C - malloc, free
## Requirements
### General
<ul>
<li> Allowed editors: vi, vim, emacs</li>
<li> All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li> All files should end with a new line</li>
<li> Code should use the Betty style. It will be checked using <em>betty-style.pl and betty-doc.pl</em></li>
<li> Not allowed to use global variables</li>
<li> No more than 5 functions per file</li>
<li> The only allowed standard library functions are <em>malloc and free.</em></li>
<li> Allowed to use <em>_putchar</em></li>
<li> The prototypes of all functions and the prototype of the function _putchar should be included in your header file called main.h</li>
</ul>

## Learning Objectives
<ul>
<li>What is the difference between automatic and dynamic allocation</li>
<liWhat is malloc and free and how to use them</li>
<li>Why and when use malloc</li>
<li>How to use <code>valgrind</code> to check for memory leak</li>
</ul>

## Task
<ol>
<li><code>0-create_array.c</code>Write a function that creates an array of chars, and initializes it with a specific char.
Prototype: char *create_array(unsigned int size, char c);
<ul>
<li>Returns NULL if size = 0</li>
<li>Returns a pointer to the array, or NULL if it fails</li>
</ul>
</li>
<li><code>1-strdup.c</code> Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Prototype: char *_strdup(char *str);
<ul>
<li>The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.</li>
<li>Returns NULL if str = NULL</li>
<li>On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available</li>
</ul>
<li><code>2-str_concat.c</code> Write a function that concatenates two strings.
Prototype: char *str_concat(char *s1, char *s2);
<ul>
<li>The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated</li>
<li>if NULL is passed, treat it as an empty string</li>
<li>The function should return NULL on failure</li>
</ul>
</li>
<li><code>3-alloc_grid.c</code>Write a function that returns a pointer to a 2 dimensional array of integers.
Prototype: int **alloc_grid(int width, int height);
<ul>
<li>Each element of the grid should be initialized to 0</li>
<li>If width or height is 0 or negative, return NULL</li>
<li>The function should return NULL on failure</li>
</ul>
</li>
<li><code>4-free_grid.c</code> Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
Prototype: void free_grid(int **grid, int height);
<ul>
<li>Compilation is done with alloc_grid.c file</li>
</ul>
</li>
</ol>