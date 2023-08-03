#include "main.h"
/* more headers goes there */

/**
 *_sqrt_recursion - a function
 *@n: input
 *@r: in
 *
 *Return: no.
 */
int sqrtr(int n, int r);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (sqrtr(n, n / 2));
}

/**
 *sqrtr - a function
 *@n: input
 *@r: in
 *Return: no.
 */
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
		return (sqrtr(n, (n / r + r) / 2));
	}
}
