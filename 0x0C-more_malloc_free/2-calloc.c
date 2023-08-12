#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *_calloc - a function
 *@nmemb: in1
 *@size: in2
 *
 *Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		c[i] = 0;
	return (c);

}
