#include "main.h"
/* more headers goes there */

/**
 * print_square - a function
 * @size: input
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
