#include "main.h"
#include <stdio.h>
/**
 * print_array - prints no of elements of array
 * @a: pointer of array
 * @n: no of elements to prints
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
