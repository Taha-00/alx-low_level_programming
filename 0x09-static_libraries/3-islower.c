#include "main.h"
/* more headers goes there */

/**
 *_islower - a function
 *@c: input
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
