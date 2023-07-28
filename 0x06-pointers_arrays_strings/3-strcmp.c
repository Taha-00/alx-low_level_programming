#include "main.h"
/* more headers goes there */

/**
 *_strcmp - a function
 *@s1: input
 *@s2: input2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
		{
			return(-1);
		}
		else if (s1[i] > s2[i])
		{
			return(1);
		}
		else
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return(0);
	else if (s1[i] == '\0')
		return(-1);
	else if (s2[i] == '\0')
		return(1);
	else
		return (0);
}
