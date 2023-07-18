#include "main.h"
/**
 * times_table - main function
 */
void times_table(void)
{
int j;
int i = 0;
int res;
while (i <= 9)
{
for (j = 0; j <= 9; j++)
{
res = i * j;
if (j == 0)
{
_putchar('0');
}
else if (res <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
}
_putchar('\n');
i++; 
}
}
