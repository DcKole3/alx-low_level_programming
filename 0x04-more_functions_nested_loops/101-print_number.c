#include "main.h"
/**
 * print_number - prints number
 * @n: integer to print using _putchar
 */
void print_number(int n)
{
int i;
int j = 1;
unsigned int a = n;
unsigned int b = n;
int c = 0;
if (n == 0)
{
_putchar('0');
}
if (n < 0)
{
_putchar('-');
n = n + 1;
n = -n;
a = n;
b = n;
a += 1;
b += 1;
}
while (a != 0)
{
a = a / 10;
c++;
}
for (i = 1; i < c; i++)
{
j *= 10;
}
for (i = 0; i < c; i++)
{
_putchar(b / j + '0');
b = b % j;
j = j / 10;
}
}
