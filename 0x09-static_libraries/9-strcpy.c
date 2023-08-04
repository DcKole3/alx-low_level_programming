#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - function for concatenating
 * @dest: destination of copy string
 * @src: src or source of copy string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i <= _strlen(src); i++)
{
dest[i] = src[i];
}
return (dest);
}
