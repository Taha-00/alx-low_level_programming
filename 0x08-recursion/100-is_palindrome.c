#include "main.h"
/* more headers goes there */


/**
 *is_palindrome - a function
 *@s: input
 *
 *
 *Return: no.
 */

char *strend(char *s);
int compstr(char *s, char *e);

int is_palindrome(char *s)
{
	char *e;

	if (s[0] == '\0')
		return (1);
	e = strend(s);
	return (compstr(s, e));
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

/**
 *compstr - a function
 *@s: input
 *@e: in2
 *Return: int
 */

int compstr(char *s, char *e)
{
	if (s >= e)
		return (1);
	if (*s == *e)
		return (compstr(s + 1, e - 1));
	else
		return (0);
}






