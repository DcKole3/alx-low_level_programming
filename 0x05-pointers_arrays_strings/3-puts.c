#include "main.h"
/**
 * _puts - prints strint to stdout
 * @str: String to print
 */
void _puts(char *str)
{
int i;
char c;
for (i = 0; str[i] != '\0'; i++)
{
c = str[i];
_putchar(c);
}
_putchar('\n');
}
