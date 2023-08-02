#include "main.h"
/* more headers goes there */

/**
 *_print_rev_recursion- a function
 *@s: input
 *
 *
 *Return: nth
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
