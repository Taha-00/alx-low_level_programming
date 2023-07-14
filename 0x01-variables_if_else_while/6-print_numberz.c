#include <stdio.h>

/**
 * main - prints only
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(char(a));
		a++;
	}
	putchar('\n');
	return (0);
}
