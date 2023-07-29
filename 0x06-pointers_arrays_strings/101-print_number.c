#include "main.h"
/* more headers goes there */

/**
 * print_number - a function
 * @n: input
 * Return: nothing
 */

void print_number(int n)
{
	int i;
	int j;
	int k;
	int c = n;
	int m;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	for (i = 1; i < n; i++)
	{
		c = c / 10;
		if (c == 0)
			break;
	}
	for (j = 0; j < i; j++)
	{
		m = n;
		for (k = 0; k < i - j - 1; k++)
		{
			m = m / 10;
		}
		_putchar(m % 10 + '0');
	}
}
