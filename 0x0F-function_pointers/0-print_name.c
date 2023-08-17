#include "function_pointers.h"
#include <stdlib.h>
/* more headers goes there */

/**
 *print_name - a function
 *@name: in
 *@f: in2
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
