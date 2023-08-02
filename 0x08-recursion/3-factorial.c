#include "main.h"
/* more headers goes there */

/**
 *factorial - a function
 *@n: input
 *
 *
 *Return: no.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
