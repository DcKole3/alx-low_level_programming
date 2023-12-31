> # 0x03. C - Debugging
## Learning Objectives
<ul>
<li>What is debugging</li>
<li>What are some methods of debugging manually</li>
<li>How to read the error messages</li>
 
## Tasks
<ol>
<li>Multiple mains: Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.
<ul>
<li>You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.</li>
<li>You are not allowed to add or remove lines of code, you may change only one line in this task.</li>
</ul>
</li>
<li>1. Like, comment, subscribe: Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
<ul>
<li>Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.</li>
<li>You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.</li>
</ul>
</li>
<li>0 > 972?: This program prints the largest of three integers.Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case. Line count will not be checked for this task.
</li>
<li>Leap year: This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration. Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.
</li>
</ol>

## Requirements
> ### General
<ul>
<li> Allowed editors: vi, vim, emacs</li>
<li> All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li> All files should end with a new line</li>
<li> Code should use the Betty style. It will be checked using <em>betty-style.pl and betty-doc.pl</em></li>
This folder contains scripts written using emacs for Ubuntu 20.04 LTS ending with a new lines to perform the following tasks:
<ol>
<li> <code>0-main, main.h</code>: Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.</li>
<ul>
<li>You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.</li>
<li>You are not allowed to add or remove lines of code, you may change only one line in this task.</li>
</ul>
<li> <code>1-main.c</code>: Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop. Don’t add or remove any lines of code, as we will be checking your line count. Only allowed to comment out existing code. Do not have to compile with -Wall -Werror -Wextra -pedantic for this task.</li>
<li> <code>2-largest_number.c, main.h</code>: Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case. Line count will not be checked for this task.</li>
<li> <code>3-print_remaining_days.c, main.h</code>: This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration. Line count will not be checked for this task.</li>
<ul>
<li>Can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).</li>
<li>can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).</li>
</ul>
</ol>
