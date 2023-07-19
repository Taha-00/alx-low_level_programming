#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - a function
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int m, h;

	m = 0;
	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + 48);
			_putchar(h % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
