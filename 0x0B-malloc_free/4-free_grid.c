#include "main.h"
#include <stdlib.h>

/**
 * free_grid -function to free 2dgrid
 * @grid: pointer to int pointer
 * @height: input height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
	free(grid[i]);
free(grid);
}
