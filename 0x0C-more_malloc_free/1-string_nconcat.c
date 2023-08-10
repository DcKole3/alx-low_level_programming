#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * @n: first n bytes of s2 to concat
 * Return: pointer to new allocated mem of concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int s1_l = 0;
unsigned int s2_l = 0;
char *str;
while (s1[i] != '\0')
{
i++;
s1_l++;
}
i = 0;
while (s2[i] != '\0')
{
i++;
s2_l++;
}
if (n >= s2_l)
n = s2_l;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
str = malloc(sizeof(char) * (s1_l + n + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < s1_l; i++)
{
str[i] = s1[i];
}
for (i = 0; i < n; i++)
{
 str[i + s1_l] = s2[i];
}
str[s1_l + i] = '\0';
return (str;
}
