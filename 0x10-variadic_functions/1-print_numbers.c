#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @n: number of expected integers
 * @separator: string between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pr;
unsigned int i;
va_start(pr, n);
for (i = 0; i < n; i++)
{
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}
printf("%d", va_arg(pr, int));
}
va_end(pr);
printf("\n");
}
