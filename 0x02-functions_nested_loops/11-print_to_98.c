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
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
	}
	putchar('\n');
}
