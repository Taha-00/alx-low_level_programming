#include "main.h"
/* more headers goes there */

/**
 * times table - a function
 *
 * Return: 0
 */

void times_table(void)
{
	int r = 0;
	int c = 0;
	int m;

	while (r <= 9)
	{
		c = 0;
		while (c <= 9)
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
		_putchar('\n');
		r++;
	}
}
