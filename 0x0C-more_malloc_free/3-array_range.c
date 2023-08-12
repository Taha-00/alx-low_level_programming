#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *array_range - a function
 *@min: in1
 *@max: in2
 *
 *Return: ptr
 */

int *array_range(int min, int max)
{
	int *a;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1)
		a[i] = min + i;
	return (a);
}
