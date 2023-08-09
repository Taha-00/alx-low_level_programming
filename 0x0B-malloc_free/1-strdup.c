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
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
