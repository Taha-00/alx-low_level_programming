#include <stdio.h>

/**
 * main - prints only
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 48;

	while (i != 57 && j != 56 && k != 57 && l != 57)
	{
		putchar(i);
		putchar(j);
		putchar(' ');
		if (i <= k && j <= l)
		{
		}
		else
		{
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
		if (k == 57 && l == 57)
			j++;
		if (j == 57)
		{
			j = 48;
			i++;
		}
		if (l != 57)
		{
			l++;
		}
		else
		{
			l = 48;
			k++;
		}
	}
	putchar('\n');
	return (0);
}
