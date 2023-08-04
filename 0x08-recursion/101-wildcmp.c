#include "main.h"
/* more headers goes there */


/**
 *wildcmp - a function
 *@s1: input
 *@s2: in2
 *
 *Return: no.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == *s1)
	{
		wildcmp(s1 + 1, s2 + 1);
		return (1);
	}
	else if (*s2 == '*')
	{
		wildcmp(s1, s2 + 1);
		return (1);
	}
	return (0);
}
