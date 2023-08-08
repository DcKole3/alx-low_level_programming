#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - allocate memory = size of str
 * @str: parameter string to copy
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
int i;
int j = 0;
char *arr;
if (str == NULL)
{
return (NULL);
}
while (str[j] != '\0')
{
j++;
}
arr = malloc(sizeof(char) * j + 1);
if (arr == NULL)
return (NULL);
for (i = 0; i < j; i++)
{
arr[i] = str[i];
}
return (arr);
}
