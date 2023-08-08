#include "main.h"
/* more headers goes there */

/**
 *_puts_recursion - a function
 *@s: input
 *
 *
 *Return: nth
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
