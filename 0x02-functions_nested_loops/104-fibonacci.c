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
	unsigned long j  = 1;
	unsigned long k = 2;
	unsigned long o;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{

		o = j + k;
		printf("%lu", o);
		if (i != 95)
			printf(", ");
		j = k;
		k = o;
	}
	printf("\n");
	return (0);

}
