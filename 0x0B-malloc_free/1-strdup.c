#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *_strdup - allocate space in memory = size of
 * copied str
 * @str: parameter string to copy
 */
char *_strdup(char *str)
{
int i;
int j = 0;
char *arr;
while (str[j] != '\0')
{
j++;
}
arr = malloc(sizeof(char) * j + 1);
if (str == NULL)
return (NULL);
if (arr == NULL)
return (NULL);
for (i = 0; i < j; i++)
{
arr[i] = str[i];
}
return (arr);
}
