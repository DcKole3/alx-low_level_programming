#include "main.h"
/**
 * main - program to copy content
 * @ac: argument count
 * @av: pointer to array of arguments
 * Return: int value 0
 */
int main(int ac, char **av)
{
int fdFrum, fdTo;
int wrote, readed;
char buff[1024];
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from 
file_to\n");
exit(97);
}
fdFrum = open(av[1], O_RDONLY);
if (fdFrum == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read 
from file %s\n", av[1]);
exit(98);
}
fdTo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fdTo == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
while ((readed = read(fdFrum, buff, 1024)) > 0)
{
wrote = write(fdTo, buff, readed);
if (wrote == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}
if (readed == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
if (close(fdFrum) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdFrum);
exit(100);
}
if (close(fdTo) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdTo);
exit(100);
}
return (0);
}
