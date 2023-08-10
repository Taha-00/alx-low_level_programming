#include "main.h"
/* more headers goes there */

/**
 *_isdigit - a function
 *@c: input
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
