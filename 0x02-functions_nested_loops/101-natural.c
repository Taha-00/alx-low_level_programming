#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * nat_fun - a function
 *
 * Return: 0
 */

void nat_fun(void)
{
	int n = 1024;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
		else if (i % 5 == 0)
			sum = sum + i;
	}
	printf("%d", sum);
