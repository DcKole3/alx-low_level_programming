#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int i;
char c;
i = _strlen(s) - 1;
while (i >= 0)
{
c = s[i];
_putchar(c);
i--;
}
_putchar('\n');
}
