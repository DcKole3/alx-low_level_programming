> # 0x0C. C - More malloc, free
## Requirements
### General
<ul>
<li> Allowed editors: vi, vim, emacs</li>
<li> All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li> All files should end with a new line</li>
<li> Code should use the Betty style. It will be checked using <em>betty-style.pl and betty-doc.pl</em></li>
<li> Not allowed to use global variables</li>
<li> No more than 5 functions per file</li>
<li> The only allowed standard library functions are <em>malloc,exit and free.</em></li>
<li> Allowed to use <em>_putchar</em></li>
<li> The prototypes of all functions and the prototype of the function _putchar should be included in your header file called main.h</li>
</ul>

## Learning Objectives
<ul>
<li>How to use the exit function</li>
<li>What are the functions calloc and realloc from the standard library and how to use them</li>
</ul>

## Task
<ol>
<li><code>0-malloc_checked.c</code> Write a function that allocates memory using malloc.
Prototype: void *malloc_checked(unsigned int b);
<ul>
<li>if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98</li>
<li>Returns a pointer to the allocated memory</li>
</ul>
</li>
<li><code>1-string_nconcat.c</code> Write a function that concatenates two strings.
Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
<ul>
<li>The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated</li>
<li>If the function fails, it should return NULL</li>
<li>If n is greater or equal to the length of s2 then use the entire string s2</li>
<li>if NULL is passed, treat it as an empty string</li>
</ul>
<li><code>2-calloc.c</code> Write a function that allocates memory for an array, using malloc.
Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
<ul>
<li>The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.</li>
<li>The memory is set to zero</li>
<li>If nmemb or size is 0, then _calloc returns NULL</li>
<li>If malloc fails, then _calloc returns NULL</li>
</ul>
</li>
<li><code>3-array_range.c</code> Write a function that creates an array of integers.
Prototype: int *array_range(int min, int max);
<ul>
<li>The array created should contain all the values from min (included) to max (included), ordered from min to max</li>
<li>Return: the pointer to the newly created array</li>
<li>If min > max, return NULL</li>
<li>If malloc fails, return NULL</li>
</ul>
</li>
</ol>