#include "main.h"
/* more headers goes there */

/**
 *print_last_digit - a function
 *@n: input
 * Return: 0
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(n % 10 * -1 + 48);
		return (n % 10 * -1);
	}
	else
	{
		_putchar(n % 10 + 48);
		return (n % 10);
	}
}
