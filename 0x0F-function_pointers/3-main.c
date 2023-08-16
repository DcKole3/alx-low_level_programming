#include "3-calc.h"
#include <stdio.h> 
#include <stdlib.h>
/**
 * main - main operation function
 * @argc:file name + operation arguments
 * @argv: array of operation
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
if (argc == 4)
{
int a = atoi(argv[1]);
int b = atoi(argv[3]);
int (*res)(int, int);
res = get_op_func(argv[2]);
if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", res(a, b));
return (0);
}
printf("Error\n");
exit (98);
}
