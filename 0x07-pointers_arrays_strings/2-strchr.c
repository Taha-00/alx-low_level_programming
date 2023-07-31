#include "main.h"

/* more headers goes there */

/**
 *_strchr - a function
 *@s: input
 *@c: input2
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] != '\n')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
