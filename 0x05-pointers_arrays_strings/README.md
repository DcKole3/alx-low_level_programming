> # 0x05. C - Pointers, arrays and strings
#Requirements
##General
<ul>
<li> Allowed editors: vi, vim, emacs</li>
<li> All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li> All files should end with a new line</li>
<li> Code should use the Betty style. It will be checked using <em>betty-style.pl and betty-doc.pl</em></li>
<li> Not allowed to use global variables</li>
<li> No more than 5 functions per file</li>
<li> Not allowed to use the standard library. Any use of functions like <code>printf, puts,</code> etc… is forbidden</li>
<li> Allowed to use <em>_putchar</em></li>
<li> The prototypes of all functions and the prototype of the function _putchar should be included in your header file called main.h</li>
</ul>

## Learning Objectives
<ul>
<li>What are pointers and how to use them</li>
<li>What are arrays and how to use them</li>
<li>What are the differences between pointers and arrays</li>
<li>How to use strings and how to manipulate them</li>
<li>Scope of variables</li>
</ul>

This folder contains scripts written using emacs for Ubuntu 20.04 LTS ending with a new lines to perform the following tasks:
<ol>
<li> <code> 0-reset_to_98.c:</code> Takes a pointer to an int as parameter and updates the value it points to to 98.
<em>Prototype: void reset_to_98(int *n);</em></li>
<li> <code>1-swap.c:</code> Swaps the values of two integers.
<em>Prototype: void swap_int(int *a, int *b);</em></li>
<li> <code>2-strlen.c:</code> Returns the length of a string.
<em>Prototype: int _strlen(char *s);</em></li>
<li> <code>3-puts.c:</code> Prints a string, followed by a new line, to stdout.
<em>Prototype: void _puts(char *str);</em></li>
<li> <code>4-print_rev.c:</code> Prints a string, in reverse, followed by a new line.
<em>Prototype: void print_rev(char *s);</em></li>
<li> <code>5-rev_string.c:</code>  Reverses a string.
<em>Prototype: void rev_string(char *s);</em></li>
<li> <code>6-puts2.c:</code>  Prints every other character of a string, starting with the first character, followed by a new line.
<em>Prototype: void puts2(char *str);</em></li>
<li> <code>7-puts_half.c:</code> Prints second half of a string, followed by a new line. If the number of characters is odd, the function prints the last n characters of the string, where n = (length_of_the_string - 1) / 2
<em>Prototype: void puts_half(char *str);</em></li>
<li> <code>8-print_array.c:</code> Prints n elements of an array of integers, followed by a new line.
<em>Prototype: void print_array(int *a, int n);</em>
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
Allowed to use printf</li>
<li> <code>9-strcpy.c:</code> Copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
<em>Prototype: char *_strcpy(char *dest, char *src);
Return value: the pointer to dest</li>
</ol>