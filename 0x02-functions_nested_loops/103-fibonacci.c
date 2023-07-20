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
	long j  = 1;
	long k = 2;
	long o = 0;
	long sum;
	
	while (o < 4000000)
	{

		o = j + k;
		if (o % 2 == 0)
			sum = sum + o;
		j = k;
		k = o;
	}
	printf("%ld\n", sum);
	return (0);

}
