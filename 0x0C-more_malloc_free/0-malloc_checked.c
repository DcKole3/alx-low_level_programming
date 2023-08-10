#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory with malloc
 * @b: memory size to allocate
 * Return: returns pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *n;
n = (void*)malloc(b);
if (n == NULL)
{
exit(98);
}
return (n);
}
