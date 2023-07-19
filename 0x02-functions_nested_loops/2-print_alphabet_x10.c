#include "main.h"
/* more headers goes there */

/**
 * print_alphabet - a function
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
