#include "main.h"
/**
 * print_last_digit - main function
 * @n: inputed int
 * Return: int value; of the last digit
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
if (m >= 0)
{
_putchar('0' + m);
return (m);
}
else
{
_putchar('0' + (m * -1));
return (m * -1);
}
}
