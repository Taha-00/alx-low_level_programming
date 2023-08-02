#include "main.h"
#include <stddef.h>

/* more headers goes there */

/**
 *_strstr - a function
 *@haystack: input
 *@needle: input2
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	char *loc;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			flag = 1;
			if (j == 0)
				loc = &haystack[i];
			j++;
		}
		else
		{
			flag = 0;
			j = 0;
		}
		if (flag == 1 && needle[j] == '\0')
			return (loc);
		i++;
	}
	return (NULL);
}
