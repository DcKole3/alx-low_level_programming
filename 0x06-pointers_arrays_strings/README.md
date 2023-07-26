> # 0x06. C - More pointers, arrays and strings
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
<li> <code>0-strcat.c:</code> concatenates two strings.Returns a pointer to the resulting string dest.appends the src and adds a terminating null byte.
<em>Prototype: char *_strcat(char *dest, char *src);</em></li>
<li> <code>1-strncat.c:</code> concatenates two strings.function is similar to the _strcat function, except that
<ul>
<li>it will use at most n bytes from src; and</li>
<li>src does not need to be null-terminated if it contains n or more bytes</li>
</ul>
<em>Prototype: char *_strncat(char *dest, char *src, int n);</em></li>
<li> <code>2-strncpy.c:</code> copies a string. Should work exactly like <code>strncpy</code>.
<em>Prototype: char *_strncpy(char *dest, char *src, int n);</em></li>
<li> <code>3-strcmp.c:</code> compares two strings. Should work exactly like <code>strcmp</code>.
<em>Prototype: int _strcmp(char *s1, char *s2);</em></li>
<li> <code>4-rev_array.c:</code> reverses the content of an array of integers. Where n is the number of elements of the array.
<em>Prototype: void reverse_array(int *a, int n);</em></li>
<li> <code>5-string_toupper.c:</code> changes all lowercase letters of a string to uppercase.
<em>Prototype: char *string_toupper(char *);</em></li>
<li> <code>6-cap_string.c:</code> capitalizes all words of a string. Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
<em>Prototype: char *cap_string(char *);</em></li>
<li> <code>7-leet.c:</code>  encodes a string into 1337.
<ul>
<li>Letters a and A should be replaced by 4</li>
<li>Letters e and E should be replaced by 3</li>
<li>Letters o and O should be replaced by 0</li>
<li>Letters t and T should be replaced by 7</li>
<li>Letters l and L should be replaced by 1</li>
<li>can only use one if in your code</li>
<li>Can only use two loops in your code</li>
<li>Not allowed to use switch</li>
<li>Not allowed to use any ternary operation</li>
</ul>
<em>Prototype: void puts_half(char *str);</em></li>
</ol>