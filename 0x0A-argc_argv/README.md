> # 0x0A. C - argc, argv
## Requirements
### General
<ul>
<li> Allowed editors: vi, vim, emacs</li>
<li> All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li> All files should end with a new line</li>
<li> Code should use the Betty style. It will be checked using <em>betty-style.pl and betty-doc.pl</em></li>
<li> Not allowed to use global variables</li>
<li> No more than 5 functions per file</li>
<li> Allowed to use the standard library.</li>
<li> Allowed to use <em>_putchar</em></li>
<li> The prototypes of all functions and the prototype of the function _putchar should be included in your header file called main.h</li>
</ul>

## Learning Objectives
<ul>
<li>How to use arguments passed to your program</li>
<li>What are two prototypes of main that you know of, and in which case do you use one or the other</li>
<li>How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters</li>
</ul>

## Task
<ol>
<li><code>0-whatsmyname.c</code>Write a program that prints its name, followed by a new line.
<ul>
<li>If you rename the program, it will print the new name, without having to compile it again</li>
<li>You should not remove the path before the name of the program</li>
</ul>
</li>
<li><code>1-args.c</code> Write a program that prints the number of arguments passed into it and a new line.</li>
<li><code>2-args.c</code> Write a program that prints all arguments it receives.
<ul>
<li>All arguments should be printed, including the first one</li>
<li>Only print one argument per line, ending with a new line</li>
</ul>
</li>
<li><code>3-mul.c</code>Write a program that multiplies two numbers.
<ul>
<li>Your program should print the result of the multiplication, followed by a new line</li>
<li>You can assume that the two numbers and result of the multiplication can be stored in an integer</li>
<li>If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1</li>
</ul>
</li>
<li><code>4-add.c</code>Write a program that adds positive numbers.
<ul>
<li>Print the result, followed by a new line</li>
<li>If no number is passed to the program, print 0, followed by a new line</li>
<li>If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1</li>
<li>You can assume that numbers and the addition of all the numbers can be stored in an int</li>
</ul>
</li>
</ol>