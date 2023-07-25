#include "main.h"
/* more headers goes there */

/**
 *print_rev- a function
 *@s: input a pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j > 0; j--)
	{
		_putchar(s[j - 1]);
	}
	_putchar('\n');
}
