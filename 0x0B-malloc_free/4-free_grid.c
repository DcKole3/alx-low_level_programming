#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid  - frees up a 2D grid
 * @grid: grid free memory
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
