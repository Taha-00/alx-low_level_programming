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
	long i;
	long n = 612852475143;
	long n2 = n;
	long k;

	for (i = 2; i <= n2; i++)
	{
		if (n2 % i == 0)
		{
			n2 = n2 / i;
			k = i;
			i--;
		}
	}
	printf("%ld\n", k);
	return (0);
}
