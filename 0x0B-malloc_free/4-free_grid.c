#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *free_grid - a function
 *@grid: in1
 *@height: in2
 *
 *Return: int ptr
 */

void free_grid(int **grid, int height)
{
	int i, j;
	
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
