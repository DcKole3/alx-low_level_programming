#include <stdio.h>
/**
 * main - Function entry point
 * Return: 0 for success
 */
int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
i++;
}
printf("\n");
return (0);
}
