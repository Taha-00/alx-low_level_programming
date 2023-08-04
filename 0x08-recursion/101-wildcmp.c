#include "main.h"
/* more headers goes there */


/**
 *wildcmp - a function
 *@s1: input
 *@s2: in2
 *
 *Return: no.
 */

char *strend(char *s);
int compstr(char *s, char *e);

int wildcmp(char *s1, char *s2)
{
	if (*s2 == *s1)
	{
		wildcmp(s1 + 1, s2 + 1);
		return (1);
	}
	else if (*s2 == '*')
	{
		wildcmp(s1, s2 + 1);
		return (1);
	}
	
}

/**
 *strend - a function
 *@s: input
 *
 *Return: char.
 */
char *strend(char *s)
{
	if (*s == '\0')
		return (s - 1);
	return (strend(s + 1));
}
