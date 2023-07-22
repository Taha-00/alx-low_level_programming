#include "main.h"
/* more headers goes there */

/**
 *more_numbers - a function
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
			j = i % 10;
			_putchar(i / 10 + '0');
		}
		else
		{
			j = i;
		}
		_putchar(j + '0');
	}
	_putchar('\n');
}
