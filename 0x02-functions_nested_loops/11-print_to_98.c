#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_to_98 - a function
 * @n: input
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98 )
	{

	while (n <= 98)
	{
		printf("%d", n);

		/*if (m / 10 != 0)
		{
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
		}
		else
		{
			_putchar(m % 10 + 48);
		}*/
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	}
	_putchar('\n');
	
	
	else
	{
	while (n >= 98)
	{
		printf("%d", n);

		/*if (m / 10 != 0)
		{
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
		}
		else
		{
			_putchar(m % 10 + 48);
		}*/
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
}
