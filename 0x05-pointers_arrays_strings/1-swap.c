#include "main.h"
/* more headers goes there */

/**
 *swap_int - a function
 *@a: input a pointer
 *@b: input 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
