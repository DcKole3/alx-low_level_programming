#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int i;
int j = 0;
int a;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (j <= size)
{
for (i = size - j; i > 0; i--)
{
_putchar(' ');
}
for (a = 0; a < j; a++)
{
  _putchar('#');
}
_putchar('\n');
j++;
}
}
}
