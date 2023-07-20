#include "main.h"
/**
 * more_numbers - main funtion
 * 
 */
void more_numbers(void)
{
int j = 0;
int i;
 while (j < 10)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar('0' + i / 10);
}
_putchar('0' + i % 10);
}
_putchar('\n');
j++;
}
}
