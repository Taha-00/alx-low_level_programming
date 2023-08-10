#include "main.h"
#include <stddef.h>

/* more headers goes there */

/**
 *_strpbrk - a function
 *@s: input
 *@accept: input2
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
