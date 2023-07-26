#include "main.h"
/* more headers goes there */

/**
 *puts2 - a function
 *@str: input a pointer
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
