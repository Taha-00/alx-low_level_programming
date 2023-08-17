#include "function_pointers.h"
/* more headers goes there */

/**
 *print_name - a function
 *@name: in
 *@f: in2
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
