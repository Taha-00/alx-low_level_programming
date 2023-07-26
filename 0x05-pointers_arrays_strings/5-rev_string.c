#include "main.h"
/* more headers goes there */

/**
 *rev_string - a function
 *@s: input a pointer
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	char r[10];

	for (j = i; j >= 0; j--)
	{
		r[i - j] = s[j];
	}
	for (j = 0; j <= i; j++)
	{
		s[j] = r[j];
	}
}
