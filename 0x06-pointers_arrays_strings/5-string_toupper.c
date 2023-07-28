#include "main.h"
/* more headers goes there */

/**
 *string_toupper - a function
 *@s: input a pointer
 * Return: 0
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
