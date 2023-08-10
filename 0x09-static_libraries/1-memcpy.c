#include "main.h"
/* more headers goes there */

/**
 *_memcpy - a function
 *@dest: input
 *@src: input2
 *@n: input3
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
