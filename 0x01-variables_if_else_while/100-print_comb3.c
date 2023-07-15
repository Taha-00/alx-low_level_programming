#include <stdio.h>

/**
 * main - prints only
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int j;

	while (i <= 57)
	{
		j = i;
		while (j <= 57)
		{
			if (j != i)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
