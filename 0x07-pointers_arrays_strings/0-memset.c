#include "main.h"
/* more headers goes there */

/**
 *_memset - a function
 *@s: input
 *@b: input2
 *@n: input3
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
