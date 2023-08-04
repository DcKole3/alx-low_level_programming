#include "main.h"
/**
 * _strncat - function for concatenating n bytes
 * @dest: destination of copied string
 * @src: src or source of copy string
 * @n: max no of bytes to concat from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (j = 0; dest[j] != '\0'; j++)
{
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';
return (dest);
}
