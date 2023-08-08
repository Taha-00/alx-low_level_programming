#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *_strdup - a function
 *@str: input
 *
 *
 *Return: char ptr
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (size));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
