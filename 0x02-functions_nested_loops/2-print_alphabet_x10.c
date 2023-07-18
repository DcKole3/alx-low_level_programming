#include "main.h"
/**
 * print_alphabet_x10 - prints alpha 10x
 * Return: 0 always;
 */
void print_alphabet_x10(void)
{
int j = 0;
char i;
while (j <= 9)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
j++;
_putchar('\n');
}
}
