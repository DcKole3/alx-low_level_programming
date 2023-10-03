> # 0x15. C - File I/O
## Learning Objectives
<ul>
<li>Look for the right source of information online</li>
<li>How to create, open, close, read and write files</li>
<li>What are file descriptors</li>
<li>What are the 3 standard file descriptors, what are their purpose and what are their POSIX names</li>
<li>How to use the I/O system calls open, close, read and write</li>
<li>What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR</li>
<li>What are file permissions, and how to set them when creating a file with the open system call</li>
<li>What is a system call</li>
<li>What is the difference between a function and a system call</li>
</ul>

## TASK(S)
<ol>
<li>Write a function that reads a text file and prints it to the POSIX standard output. 
Prototype: ssize_t read_textfile(const char *filename, size_t letters); 
<ul>
<li>where letters is the number of letters it should read and print</li>
<li>returns the actual number of letters it could read and print</li>
<li>if the file can not be opened or read, return 0</li> 
<li>if filename is NULL return 0 </li>
<li>if write fails or does not write the expected amount of bytes, return 0.</li>
</ul>
</li>

<li> Create a function that creates a file. 
Prototype: int create_file(const char *filename, char *text_content); 
<ul>
<li> where filename is the name of the file to create and text_content is a NULL terminated string to write to the file </li>
<li> Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…) The created file must have those permissions: rw-------. </li>
<li> If the file already exists, do not change the permissions. </li>
<li> if the file already exists, truncate it</li>
<li> if filename is NULL return -1 if text_content is NULL create an empty file.</li>
</ul>
</li>

<li>Write a function that appends a text at the end of a file. 
Prototype: int append_text_to_file(const char *filename, char *text_content); 
<ul>
<li>where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file </li>
<li> Return: 1 on success and -1 on failure </li>
<li> Do not create the file if it does not exist If filename is NULL return -1 </li>
<li> If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file.</li>
</ul>
</li>

<li>Write a program that copies the content of a file to another file. 
<ul>
<li>Usage: cp file_from file_to </li>
<li> if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error </li>
<li> if file_to already exists, truncate it </li>
<li> if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error where NAME_OF_THE_FILE is the first argument passed to your program </li>
<li> if you can not create or if write to file_to failes, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error where NAME_OF_THE_FILE is the second argument passed to your program </li>
<li> if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error where FD_VALUE is the value of the file descriptor </li>
<li> Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions </li>
<li> Must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer 
<li>  Allowed to use dprintf.</li>
</ul>
</li>

</ol>