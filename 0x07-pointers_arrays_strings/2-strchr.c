#include "main.h"
/**
 * *_strchr -  locates a character in a string.
 * @s: string to examine
 * @c: Char to find
 * Return: pointer to first c or NULL (not found)
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (s[i] == c)
{
return (s + i);
}
return (0);
}
