#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @size: size of the square
 */
void print_square(int size)
{
int i;
int j = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (j < size)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
j++;
}
}
}
