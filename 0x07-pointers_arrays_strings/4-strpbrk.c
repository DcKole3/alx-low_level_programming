#include "main.h"
/**
 * _strpbrk - function that searches a string
 * @s: string to searched for matches
 * @accept: string to compare to get no of bytes
 * Return: pointer to s matching bytes
 */
char *_strpbrk(char *s, char *accept)
{
  int i,j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
return (s + i);
}
}
}
return (0);
}
