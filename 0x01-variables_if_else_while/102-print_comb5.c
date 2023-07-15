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
	int f = 1;

	while (f)
	{
		if (k > i || l > j)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			putchar(k);
			putchar(l);
			if (i == 57 && j == 56 && k == 57 && l == 57)
			{
				putchar('\n');
				f = 0;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (l < 57)
		{
			l++;
		}
		else if (k != 57)
		{
			l = 48;
			k++;
		}
		else if (j != 57)
		{
			j++;
			if (j == 57)
			{
				k = i + 1;
				l = 48;
			}
			else
			{
			k = i;
			l = j + 1;
			}
		}
		else
		{
			i++;
			j = 48;
			k = i;
			l = j + 1;
		}

	}
	return (0);
}
