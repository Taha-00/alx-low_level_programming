#include "variadic_functions.h"
#include <stdarg.h>
/* more headers goes there */

/**
 *print_numbers - a function
 *@separator: in
 *@n: in2
 *@...: var input
 * Return: nth
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
