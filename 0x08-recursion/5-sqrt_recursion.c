#include "main.h"
/* more headers goes there */

/**
 *_sqrt_recursion - a function
 *@n: input
 *
 *
 *Return: no.
 */
int sqrtr(int n, int r);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if ( n == 1)
		return (1);
	return (sqrtr(n, n / 2));
}

int sqrtr(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r < 1)
	{
		return (-1);
	}
	else
	{
		r--;
		sqrtr(n, r);
	}
}
