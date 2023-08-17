#include "function_pointers.h"
#include <stdio.h>


/* more headers goes there */

/**
 *array_iterator - a function
 *@array: in1
 *@size: in2
 *@action: in3
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
