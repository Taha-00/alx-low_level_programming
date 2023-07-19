#include <main.h>
/* more headers goes there */

/**
 * print_alphabet - a function
 * @a: is the character to be printed
 * Return: 0
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a < 26)
	{
		_putchar(a);
	}
	_putchar('\n');
}
