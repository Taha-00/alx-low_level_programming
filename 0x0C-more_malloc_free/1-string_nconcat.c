#include "main.h"
#include <stdlib.h>

/* more headers goes there */


/**
 *_strlen - a function
 *@s: input a pointer
 *
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

/**
 *string_nconcat - a function
 *@s1: in1
 *@s2: in2
 *@n: in3
 *
 *Return: char ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	while (s1[i] != '\0')
                i++;
	if (s1 == NULL)
		s1 = "";

	while (s2[j] != '\0')
                j++;
	if (s2 == NULL)
                s2 = "";

	if (n < j)
		j = n;

	if (i == 0 && j == 0)
	{
		s = malloc(sizeof(char));
		s[0] = '\0';
		return (s);
	}
	s = malloc(sizeof(char) * (i + n + 1));
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


