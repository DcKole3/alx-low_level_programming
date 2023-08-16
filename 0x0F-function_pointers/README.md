> # 0x0E-structures_typedef
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
e> etc… is forbidden</li>
<li> Allowed to use <em>_putchar</em></li>
<li> The prototypes of all functions and the prototype of the function _putchar should be includ\
ed in your header file called main.h</li>
<li> Not allowed to use <em>static</em> variable or any kind of loops</li>
</ul>

## Learning Objectives
<ul>
<li>What are structures, when, why and how to use them</li>
<li>How to use typedef</li>
</ul>

## Tasks
<ol>
<li><code></code> Define a new type struct dog with the following elements: name, type = char * age, type = float owner, type = char *</li>
<li><code>1-</code> Write a function that initialize a variable of type struct dog 
<em>Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);</em></li>
<li><code>2-</code> Write a function that prints a struct dog 
<em>Prototype: void print_dog(struct dog *d); </em>
<ul>
<li>Format: as shown in example. </li>
<li>Allowed to use the standard library </li>
<li>If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil)) </li>
<li>If d is NULL print nothing.</li>
</ul>
</li>
<li><code>3-</code> Define a new type dog_t as a new name for the type struct dog.</li>
<li><code>4-</code>Write a function that creates a new dog. 
<em>Prototype: dog_t *new_dog(char *name, float age, char *owner); </em>
<ul>
<li>You have to store a copy of name and owner </li>
<li>Return NULL if the function fails. </li>
</ul>
</li>
<li><code>5-</code> Write a function that frees dogs. 
<em>Prototype: void free_dog(dog_t *d);</em></li>
</ol>