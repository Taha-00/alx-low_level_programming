#include "main.h"
/* more headers goes there */

/**
 *puts_half - a function
 *@str: input a pointer
 * Return: 0
 */

void puts_half(char *str);
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		for (j = 22 + ((i - 1) / 2); j <= i; j++)
		{
			_putchar(str[j - 1]);
		}
		_putchar('\n');
	}

	else
	{
		for (j = 1 + (i / 2); j <= i; j++)
		{
			_putchar(str[j - 1]);
		}
		_putchar('\n');
	}
}
