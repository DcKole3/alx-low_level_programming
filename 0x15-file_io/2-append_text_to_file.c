#include "main.h"
/**
 * append_text_to_file - appends to file
 * @filename: name of file
 * @text_content: content of text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fdir, len = 0;
long int wrote;
if (filename == NULL)
return (-1);
fdir = open(filename, O_RDWR | O_APPEND);
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
