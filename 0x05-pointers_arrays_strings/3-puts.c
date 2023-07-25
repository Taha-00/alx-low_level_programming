#include "main.h"
/* more headers goes there */

/**
 *_puts - a function
 *@str: input a pointer
 * Return: 0
 */

void _puts(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
