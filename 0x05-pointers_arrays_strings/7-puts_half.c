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
if (_strlen(str) % 2 != 0)
{
for (i = (_strlen(str) - 1) / 2; str[i] != '\0'; i++)
{
c = str[i];
_putchar(c);
}
}
else
{
for (i = _strlen(str) / 2; str[i] != '\0'; i++)
{
c = str[i];
_putchar(c);
}
}
_putchar('\n');
}
