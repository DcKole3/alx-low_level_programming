#include "main.h"
/**
 * *_strncpy - copies n bytes of string.
 * @dest: dest of copied string
 * @src: soucre of copy string
 * @n: max no of bytes to copy
 * Return: pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i]; 
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
