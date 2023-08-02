> # 0x08. C - Recursion
## Requirements
### General
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
<li> Not allowed to use <em>static</em> variable or any kind of loops</li>
</ul>

## Learning Objectives
<ul>
<li>What is recursion</li>
<li>How to implement recursion</li>
<li>In what situations you should and shouldn't implement recursion</li>
</ul>

This folder contains scripts written using emacs for Ubuntu 20.04 LTS ending with a new lines to perform the following tasks:
<ol>
<li> <code>0-puts_recursion.c:</code> prints a string, followed by a new line.
<em>Prototype: void _puts_recursion(char *s);</em></li>
<li> <code>1-print_rev_recursion.c:</code> Prints a string in reverse.
<em>Prototype: void _print_rev_recursion(char *s);</em></li>
<li> <code>2-strlen_recursion.c:</code> Returns the length of a string.
<em>Prototype: int _strlen_recursion(char *s);</em></li>
<li> <code>3-factorial.c:</code> Returns the factorial of a given number. If n is lower than 0, the function returns -1 to indicate an error. Factorial of 0 is 1
<em>Prototype: int factorial(int n);</em></li>
<li> <code>4-pow_recursion.c:</code> Returns the value of x raised to the power of y. If y is lower than 0, the function should return -1.
<em>Prototype: int _pow_recursion(int x, int y);</em></li>
<li> <code>5-sqrt_recursion.c:</code> Returns the natural square root of a number. If n does not have a natural square root, the function should return -1.
<em>Prototype: int _sqrt_recursion(int n);</em></li>
<li> <code>6-is_prime_number.c:</code> Returns 1 if the input integer is a prime number, otherwise return 0.
<em>Prototype: int is_prime_number(int n);</em></li>

</ol>