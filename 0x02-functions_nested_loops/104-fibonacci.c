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
	unsigned long j1 = j % 1000000000;
	unsigned long j2 = j / 1000000000;
	unsigned long k = 2;
	unsigned long k1 = k % 1000000000;
	unsigned long k2 = k / 1000000000;
	/*unsigned long o;*/
	unsigned long o1;
	unsigned long o2;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{

		o1 = (j1 + j2 + k1 + k2) % 1000000000;
		o2 = (j1 + j2 + k1 + k2) / 1000000000;
		printf("%lu%lu", o2, o1);
		if (i != 95)
			printf(", ");
		j1 = k1;
		j2 = k2;
		k1 = o1;
		k2 = o2;
	}
	printf("\n");
	return (0);

}
