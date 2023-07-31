#include "main.h"
/* more headers goes there */

/**
 *_strcat - a function
 *@dest: input
 *@src: input2
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}

	while (src[i] != '\0')
	{
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	dest[dlen + 1] = '\0';
	return (dest);
}
