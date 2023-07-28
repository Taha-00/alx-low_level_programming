#include "main.h"
/* more headers goes there */

/**
 *cap_string - a function
 *@s: input a pointer
 * Return: 0
 */

char *cap_string(char *s)
{
	int i = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i] == ' ' || s[i] == 9 || s[i] == '\n' || s[i] == ',' || s[i] == ';')
			flag = 1;
		if (s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(')
			flag = 1;
		if (s[i] == ')' || s[i] == '{' || s[i] == '}')
			flag = 1;
		if (flag == 1)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
			flag = 0;
		}
		i++;
	}
	return (s);
}
