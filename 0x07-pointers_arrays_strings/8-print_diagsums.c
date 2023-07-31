#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: array to print sums
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int slantfwd = 0;
int slantbwd = 0;
for (i = 0; i < size; i++)
{
slantfwd += a[(i * size) + i];
slantbwd += a[(size - 1) + ((size - 1) * i)];
}
printf("%d, %d\n", slantfwd, slantbwd);
}
