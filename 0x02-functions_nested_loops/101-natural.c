#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * main - a function
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int s = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			s = s + i;
		}
		else if (i % 5 == 0)
		{
			s = s + i;
		}
		else
		{
		}
	}
	printf("%d\n", s);
	return (0);
}
