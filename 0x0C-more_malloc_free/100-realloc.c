#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *malloc_checked - a function
 *@b: in1
 *
 *
 *Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	char *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
