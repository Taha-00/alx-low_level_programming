#include "main.h"
/* more headers goes there */

/**
 *print_sign - a function
 *@n: input
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}