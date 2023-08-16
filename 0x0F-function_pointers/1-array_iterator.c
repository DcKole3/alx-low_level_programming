#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes function to array elements
 * @array: array with elements
 * @size: size of the array
 * @action: parameter function to apply
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
exit (98);
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
