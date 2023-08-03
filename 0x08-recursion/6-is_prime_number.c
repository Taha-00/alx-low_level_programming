#include "main.h"
/* more headers goes there */

/**
 *prima - a function
 *@n: input
 *@fac: in
 *
 *Return: no.
 */
int prima(int n, int fac)
{
	if (n % fac == 0 && n != fac)
		return (0);
	if (fac == n)
		return (1);
	return (prima(n, fac + 1));
}

/**
 *is_prime_number - a function
 *@n: input
 *
 *
 *Return: no.
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	else if (n < 1)
		return (0);
	prima(n, 2);
}
