#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *alloc_grid - a function
 *@width: in1
 *@height: in2
 *
 *Return: int ptr
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
