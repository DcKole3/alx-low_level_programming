#include "main.h"
/**
 * _sepCheck - checks for separators
 * @a: char to check
 * Return: (1)true or (0)false
 */
int _sepCheck(char a)
{
int i;
char sep[13] = {'\n', '\t', ' ', '.', ',',
';',',', '!', '?', '(',')', '{', '}'};
for (i = 0; i < 13; i++)
{
if (sep[i] == a)
{
return (1);
}
}
return (0);
}

/**
 * *cap_string - capitalizes all 
 * words of a string
 * @c: srting to work on
 * Return: changed string chars
 */
char *cap_string(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (_sepCheck(c[i]))
{
continue;
}
if (c[i] >= 'a' && c[i] <= 'z' && _sepCheck(c[i - 1]))
{
c[i] = c[i] - 32;
}
}
return (c);
}
