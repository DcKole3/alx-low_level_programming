#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index -searches for an integer
 * @array:array with elements
 * @size:no of array elements
 * @cmp:compare function to apply
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
if (array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
