#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns pointer to concated string
 */
char *str_concat(char *s1, char *s2)
{
int i;
int s1_len = 0;
int s2_len = 0;
char *arr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
{
i++;
s1_len++;
}
i = 0;
while (s2[i] != '\0')
{
i++;
s2_len++;
}
arr = malloc(sizeof(char) * (s1_len + s2_len + 1));
if (arr == NULL)
return (NULL);
for (i = 0; i < s1_len; i++)
{
arr[i] = s1[i];
}
for (i = 0; i < s2_len; i++)
{
arr[i + s1_len] = s2[i];
}
arr[i + s1_len] = '\0';
return (arr);
}
