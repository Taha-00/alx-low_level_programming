#include "main.h"
#include <stddef.h>

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
	int flag = 1;

	while (s[i] != '\n')
	{
		j = 0;
		while (accept[j] != '\n')
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
