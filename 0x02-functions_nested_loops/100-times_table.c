#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_times_table - a function
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int r = 0;
	int c = 0;
	int m;

	if (n < 0 || n > 15)
		return;
	while (r <= n)
	{
		c = 0;
		while (c <= n)
		{
			m = r * c;
			if (m / 10 == 0 && c == 0)
			{
				_putchar(m % 10 + 48);
			}
			else if (m / 10 == 0)
			{
				_putchar(' ');
				_putchar(m % 10 + 48);
			}
			else
			{
				_putchar(m / 10 + 48);
				_putchar(m % 10 + 48);
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		/*_putchar('\n');*/
		printf("\n");
		r++;
	}
}
