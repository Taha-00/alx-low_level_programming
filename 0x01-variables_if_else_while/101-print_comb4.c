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
	int k;

	while (i <= 57)
	{
		j = i;
		while (j <= 57)
		{
			k = j;
			while (k <= 57)
			{
				if (i != j && k != j && k != i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
