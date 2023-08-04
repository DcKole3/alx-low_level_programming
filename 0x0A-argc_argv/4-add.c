#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#define UNUSED(y) (void)(y)
/**
 * int_finder - checks for int in argv strings
 * @v: strings to check
 * Return: values 0 (int) or 1 (not int)
 */
int int_finder(char *v)
{
int i = 0;
for (; v[i] !='\0'; i++)
{
if (!isdigit(v[i]))
{
return (0);
}
}
return (1);
}

/**
 * main - function entry point
 * @argc: argument counter
 * @argv: argument vector or array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (int_finder(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
else
{
printf("0\n");
return (1);
}
}
