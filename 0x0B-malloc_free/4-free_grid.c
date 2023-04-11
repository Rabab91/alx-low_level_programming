#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Main Entry
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
