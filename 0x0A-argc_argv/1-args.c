#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#define UNUSED(v) (void)(v)
/**
 * main - function entry point
 * @argc: argument counter
 * @argv: argument vector or array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
UNUSED(*argv);
printf("%d\n", argc - 1);
return (0);
}
