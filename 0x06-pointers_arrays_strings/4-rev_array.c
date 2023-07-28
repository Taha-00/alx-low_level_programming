#include "main.h"
/* more headers goes there */

/**
 *reverse_array - a function
 *@a: input
 *@n: input2
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		j--;
	}

}
