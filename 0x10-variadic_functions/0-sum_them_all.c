#include "variadic_functions.h"
#include <stdarg.h>
/* more headers goes there */

/**
 *sum_them_all - a function
 *@n: in
 *@...: var input
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
