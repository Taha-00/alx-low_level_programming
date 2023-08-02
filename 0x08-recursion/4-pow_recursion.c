#include "main.h"
/* more headers goes there */

/**
 *_pow_recursion - a function
 *@x: input
 *@y: in2
 *
 *Return: no.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1);
}
