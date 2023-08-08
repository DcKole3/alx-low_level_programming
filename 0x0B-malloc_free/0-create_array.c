#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: Chars to initialize array with
 * Return: pointer to the array or 0 (fail/size 0)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
arr = malloc(sizeof(char) * size);
 if (size == 0)
{
return (NULL);
}
if (size != 0)
{
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
else
return (NULL);
}
