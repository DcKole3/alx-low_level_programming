#include "main.h"
/**
 * *string_toupper - changes string lowercase to uppercase.
 * @c: string/char to work on
 * Return: changed string char
 */
char *string_toupper(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
}
}
return (c);
}
