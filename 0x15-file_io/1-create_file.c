#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename to create
 * @text_content: string to write to file
 * Return: 1 on success, or -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
int dir, len = 0;
long int wrote;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (dir == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
wrote = write(dir, text_content, len);
if (wrote == -1)
return (-1);
}
if (close(dir) == -1)
{
return (-1);
}
return (1);
}
