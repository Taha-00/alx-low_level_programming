#include "main.h"
/* more headers goes there */

/**
 *_strncpy - a function
 *@dest: input
 *@src: input2
 *@n: number
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i != n))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n - 1)
	{
	while (dest[i] != '\0')
	{
	dest[i] = '\0';
	i++;
	}
	}
	return (dest);
}
