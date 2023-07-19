#include "main.h"
/* more headers goes there */

/**
 *_abs - a function
 *@n: input
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n*-1);
	else
		return (n);
}
