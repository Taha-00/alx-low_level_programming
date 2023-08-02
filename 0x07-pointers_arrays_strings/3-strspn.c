#include "main.h"

/* more headers goes there */

/**
 *_strspn - a function
 *@s: input
 *@accept: input2
 * Return: string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
			flag = 0;
			j++;
		}
		if (flag == 0)
			return (i);
		i++;
	}
	return (i);
}
