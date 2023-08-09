#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *str_concat - a function
 *@s: in1
 *
 *
 *Return: char ptr
 */

int _strlen(char *s);

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = _strlen(s1);
	int j = _strlen(s2);
	int k;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
	s[k + i] = s2[k];
	}
	s[i + j + 1] = '\0';
	return (s);
}

/**
 *_strlen - a function
 *@s: input a pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
