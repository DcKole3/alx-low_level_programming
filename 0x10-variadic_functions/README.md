> # 0x10. C - Variadic functions
## Requirements
### General
<ul>
<li> Allowed editors: vi, vim, emacs</li>
<li> All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options <code>-Wall -We\
rror -Wextra -pedantic -std=gnu89</code></li>
<li> All files should end with a new line</li>
<li> Code should use the Betty style. It will be checked using <em>betty-style.pl and betty-doc.\
pl</em></li>
<li> Not allowed to use global variables</li>
<li> No more than 5 functions per file</li>
<li> Not allowed to use the standard library. Any use of functions like <code>printf, puts,</cod\
e> etc… is forbidden. Allowed only are malloc, free and exit</li>
<li> Allowed to use <em>_putchar</em></li>
<li> The prototypes of all functions and the prototype of the function _putchar should be includ\
ed in your header file called variadic_functions.h</li>
<li> Allowed to use the following macros: va_start, va_arg and va_end</li>
<li> All header files should be include guarded</li>
</ul>

## Learning Objectives
<ul>
<li>What are variadic functions</li>
<li>How to use va_start, va_arg and va_end macros</li>
<li>Why and how to use the const type qualifier</li>
</ul>

## Tasks
<ol>
<li><code>0-sum_them_all.c</code> Write a function that returns the sum of all its parameters. If n == 0, return 0
<em>Prototype: int sum_them_all(const unsigned int n, ...);</em></li>
<li><code>1-print_numbers.c</code> Write a function that prints numbers, followed by a new line.
<em>void print_numbers(const char *separator, const unsigned int n, ...);</em>
<ul>
<li>where separator is the string to be printed between numbers</li>
<li>and n is the number of integers passed to the function </li>
<li>allowed to use printf </li>
<li>If separator is NULL, don’t print it</li>
<li>Print a new line at the end of function</li>
</ul>
</li>
<li><code>2-print_strings.c</code> Write a function that prints strings, followed by a new line.
<em>Prototype: void print_strings(const char *separator, const unsigned int n, ...); </em>
<ul>
<li>where separator is the string to be printed between numbers</li>
<li>and n is the number of integers passed to the function </li>
<li>allowed to use printf </li>
<li>If separator is NULL, don’t print it</li>
<li>If one of the string is NULL, print (nil) instead</li>
<li>Print a new line at the end of function</li>
</ul>
</li>
<li><code>3-print_all.c</code> Write a function that prints anything.
<em>Prototype: void print_all(const char * const format, ...); </em>
<ul>
<li>where format is a list of types of arguments passed to the function
<ul>
<li>c: char</li>
<li>i: integer </li>
<li>f: float </li>
<li>s: char * (if the string is NULL, print (nil) instead</li>
<li>any other char should be ignored</li>
</ul>
</li>
<li>not allowed to use for, goto, ternary operator, else, do ... while </li>
<li>can use a maximum of:
<ul>
<li>2 <code>while</code> loops</li>
<li>2 <code>if</code></li>
</ul>
</li>
<li>can declare a maximum of 9 variables</li>
<li>are allowed to use <code>printf</code></li>
<li>Print a new line at the end of function</li>
</ul>
</li>
</ol>