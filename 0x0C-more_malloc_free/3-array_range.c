#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: minumum int of array
 * @max: maximun int of array
 * Return: pointer to the new int array
 *
 */
int *array_range(int min, int max)
{
int i;
int arr_l = 0;
int *arr;
i = min;
while (i <= max)
{
i++;
arr_l++;
}
if (min > max)
return (NULL);
arr = malloc(sizeof(int) * arr_l);
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
{
arr[i] = min;
min++;
}
return (arr);
}
