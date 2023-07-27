#include "main.h"
/* more headers goes there */

/**
 *_atoi - a function
 *@s: input
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			_putchar(s[i]);
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (0);
}
