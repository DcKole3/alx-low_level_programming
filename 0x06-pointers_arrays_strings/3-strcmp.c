#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: value of comparism
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] - s2[i] == 0 && s1[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}
