#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *create_array - a function
 *@size: input
 *@c: in2
 *
 *Return: char ptr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	free(arr);
	return (arr);
}
