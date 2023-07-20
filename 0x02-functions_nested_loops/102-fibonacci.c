#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * main - a function
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long j  = 1;
	long k = 2;
	long o;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{

		o = j + k;
		printf("%ld", o);
		if (i != 47)
			printf(", ");
		j = k;
		k = o;
	}
	printf("\n");
	return (0);

}
