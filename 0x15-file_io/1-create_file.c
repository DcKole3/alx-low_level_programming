#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename to grab
 * @text_content: content to add
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fdir, len = 0;
long int wrote;
if (filename == NULL)
return (-1);
fdir = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fdir == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
wrote = write(fdir, text_content, len);
if (wrote == -1)
return (-1);
}
if (close(fdir) == -1)
{
return (-1);
}
return (1);
}
