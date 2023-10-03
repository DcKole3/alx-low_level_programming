#include "main.h"
/**
 * read_textfile - reads a textfile and prints to stdout
 * @filename: file to read
 * @letters: amount of bytes to read & print
 * Return: No of RD and printed letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int dir, printed, wrote;
char *buff;
buff = malloc(letters);
if (buff == NULL)
return (0);
if (filename == NULL)
return (0);
dir = open(filename, O_RDWR);
if (dir == -1)
return (0);
printed = read(dir, buff, letters);
if (printed == -1)
return (0);
wrote = write(STDOUT_FILENO, buff, printed);
if (wrote == -1)
return (0);
if (close(dir) == -1)
return (0);
free(buff);
return (printed);
}
