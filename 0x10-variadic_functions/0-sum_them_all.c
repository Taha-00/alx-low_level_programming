#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/* more headers goes there */

/**
 *sum_them_all - a function
 *@n: in
 *
 * Return: nothing
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list args;
	int i, sum;

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(args);
	return (sum);
}
