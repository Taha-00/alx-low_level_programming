#include "main.h"
/* more headers goes there */

/**
 *_isalpha - a function
 *@c: input
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
