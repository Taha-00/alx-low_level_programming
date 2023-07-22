#include "main.h"
/* more headers goes there */

/**
 *print_most_numbers - a function
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if(i == 2 || i == 4)
		{
		}
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
