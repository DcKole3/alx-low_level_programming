#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str: String to work on
 */
void puts_half(char *str)
{
int i;
char c;
int d = 0;
if (_strlen(str) % 2 != 0)
{
d += 1;
for (i = (_strlen(str) + d) / 2; i < _strlen(str); i++)
{
c = str[i];
_putchar(c);
}
}
else
{
for (i = (_strlen(str) + d) / 2; i < _strlen(str); i++)
{
c = str[i];
_putchar(c);
}
}
_putchar('\n');
}
