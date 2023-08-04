> # 0x09. C - Static libraries
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
<li>What is a static library, how does it work, how to create one, and how to use it</li>
<li>Basic usage of ar, ranlib, nm</li>
</ul>

## Task
<ol>
<li>Create the static library <code>libmy.a</code></li>
<li>Create a script called <code>create_static_lib.sh</code> that creates a static library called <code>liball.a</code> from all the .c files that are in the current directory.</li>
</ol>