#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_times_table - a function
 *
 * @n: input
 * Return: 0
 */

void print_times_table(int n)
{
	int r = 0;
	int c = 0;
	int m;

	if (n < 0 || n > 15)
		return;
	while (r <= n)
	{
		c = 0;
		while (c <= n)
		{
			m = r * c;
			printf("%d", m);

			if (c != n)
			{
				putchar(',');
				if ((r * (c + 1)) / 10 == 0)
					printf("   ");
				else if ((r * (c + 1)) / 100 == 0)
					printf("  ");
				else
					printf(" ");
			}
			c++;
		}
		/*_putchar('\n');*/
		printf("\n");
		r++;
	}
}
