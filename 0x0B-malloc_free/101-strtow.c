#include "main.h"
#include <stdlib.h>

/* more headers goes there */

/**
 *strtow - a function
 *@str: in1
 *
 *
 *Return: char ptr
 */


char **strtow(char *str)
{
	char **s;
	int i, j, k, kmax;

	i = j = k = kmax = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			k++;
			if (kmax < k)
				kmax = k;
		}
		else if (str[i] == ' ' && k != 0)
		{
			if (str[i + 1] == ' ')
			{
				j = j;
			}
			else if (str [i + 1] != '\0')
			{
				j++;
				k = 0;
			}
		}
		i++;
	}
	s = malloc(sizeof(char *) * (j + 1));
	for (i = 0; i < j; i++)
		s[i] = malloc(sizeof(char) * kmax);
	
	i = j = k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			s[j][k] = str[i];
			k++;
		}
		else if (str[i] == ' ' && k != 0)
		{
			if (str[i + 1] == ' ')
			{
				j = j;
			}
			else if (str [i + 1] != '\0')
			{
				j++;
				k = 0;
			}
		}
		i++;
	}
	return (s);
}
