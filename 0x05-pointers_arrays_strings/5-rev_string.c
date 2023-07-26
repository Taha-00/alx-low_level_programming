#include "main.h"
/* more headers goes there */

/**
 *rev_string - a function
 *@s: input a pointer
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char *start, *end, tmp;

	start = s;
	end = s;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i - 1; j++)
	{
		end++;
	}
	for (j = 0; j < i / 2; j++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
}
