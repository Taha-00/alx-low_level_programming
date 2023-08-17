#include "variadic_functions.h"
#include <stdarg.h>
/* more headers goes there */

/**
 *print_all - a function
 *@format: in
 *@...: var input
 * Return: nth
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *w;

	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		w = va_arg(args, char *);
		if (w == NULL)
			w = "(nil)";
		printf("%s", w);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
