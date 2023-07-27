#include "main.h"
/* more headers goes there */

/**
 *_strncat - a function
 *@dest: input
 *@src: input2
 *@n: in
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}

	while (i != n)
	{
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	dest[dlen + 1] = '\0';
	return (dest);
}
