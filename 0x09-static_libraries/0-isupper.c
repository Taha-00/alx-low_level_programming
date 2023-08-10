#include "main.h"
/* more headers goes there */

/**
 *_isupper - a function
 *@c: input
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
