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
	int l;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = i;
			while (k <= 57)
			{
				l = j;
				while (l <= 57)
				{
					if (k == i && l == j)
					{
					}
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56 && k == 57 && l == 57)
						{
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
					l++;
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
