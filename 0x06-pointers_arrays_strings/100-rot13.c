#include "main.h"
/* more headers goes there */

/**
 *rot13 - a function
 *@s: input
 *
 * Return: 0
 */

char *rot13(char *s)
{
	char sym[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char eqs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == sym[j])
			{
				s[i] = eqs[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
