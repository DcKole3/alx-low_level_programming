#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates 2-D array of int.
 * @width: array's width
 * @height: array's height
 * Return: returns pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
int **arr;
int i;
int j;
arr = (int **)malloc(sizeof(int *) * height);
if (width <= 0 || height <= 0)
return (NULL);
if (arr == NULL)
return (NULL);
for  (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(arr[j]);
}
free(arr);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
arr[i][j] = 0;
}
return (arr);
}
