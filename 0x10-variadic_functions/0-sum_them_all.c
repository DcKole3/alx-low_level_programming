#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums parameters
 * @n: number of expected arguments
 * Return: summation or 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list num;
unsigned int i;
int m = 0;
if (n != 0)
{
va_start(num, n);
for (i = 0; i < n; i++)
{
m += va_arg(num, int);
}
va_end(num);
return (m);
}
return (0);  
}
