#include "main.h"
/* more headers goes there */

/**
 *leet - a function
 *@s: input
 *
 * Return: 0
 */

char *leet(char *s)
{
	char sym [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char eqs [] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == sym[j])
				s[i] = eqs[j];
		}
		i++;
	}
	return (s);
}
