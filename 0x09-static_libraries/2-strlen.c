#include "main.h"
/* more headers goes there */

/**
 *_strlen - a function
 *@s: input a pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
