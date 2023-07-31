#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string to examine
 * @accept: bytes for s to consist of
 * Return: num of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
int i,j;
unsigned int len = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
len++;
break;
}
}
if (s[j] == '\0')
{
return (len);
}
}
return (len);
}
