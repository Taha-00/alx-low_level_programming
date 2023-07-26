#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 *print_array - a function
 *@a: input a pointer
 *@n: number
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
