#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_c - prints char
 * @pr: arguments list
 * Return: 0 always
 */
int print_c(va_list pr)
{
printf("%c", va_arg(pr, int));
return (0);
}
/**
 * print_i - prints int
 * @pr: arguments list
 * Return: 0 always
 */
int print_i(va_list pr)
{
printf("%d", va_arg(pr, int));
return (0);
}
/**
 * print_f - prints float
 * @pr: arguments list
 * Return: 0 always
 */
int print_f(va_list pr)
{
printf("%f", va_arg(pr, double));
return (0);
}
/**
 * print_s - prints string
 * @pr: arguments list
 * Return: 0 always
 */
int print_s(va_list pr)
{
char *string;
string = va_arg(pr, char *);
if (string == NULL)
{
printf("(nil)");
return (0);
}
printf("%s", string);
return (0);
}
/**
 * print_all - prints all
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
int i;
int j;
char *sep1 = "";
char *sep2 = ", ";
va_list printall;
pr_all ops[] = {
{"c", print_c},
{"i", print_i},
{"s", print_s},
{"f", print_f},
{NULL, NULL}
};
va_start(printall, format);
i = 0;
while (format != NULL && format[i])
{
j = 0;
while (ops[j].f != NULL)
{
if (format[i] == *(ops[j].c))
{
printf("%s", sep1);
ops[j].f(printall);
}
j++;
}
sep1 = sep2;
i++;
}
printf("\n");
va_end(printall);
}
