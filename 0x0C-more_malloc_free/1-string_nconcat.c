#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *string_nconcat - a function
 *@s1: in1
 *@s2: in2
 *@n: in3
 *
 *Return: char ptr
 */

int _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = _strlen(s1);
	unsigned int j = _strlen(s2);
	unsigned int k;
	if (n < j)
		j = n;

	if (i == 0 && j == 0)
	{
		s = malloc(sizeof(char));
		s[0] = '\0';
		return (s);
	}
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
