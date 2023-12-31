#include "main.h"
/**
 * append_text_to_file - appends to end of file
 * @filename: name of file
 * @text_content: string to add at end of file
 * Return: 1 on success and -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int dir, len = 0;
long int wrote;
if (filename == NULL)
return (-1);
dir = open(filename, O_RDWR | O_APPEND);
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
