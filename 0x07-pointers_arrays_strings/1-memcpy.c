#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: dest of copied memory.
 * @src: copy memory source
 * @n: no of bytes to copy from src
 * Return: pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
