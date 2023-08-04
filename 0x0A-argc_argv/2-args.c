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
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
