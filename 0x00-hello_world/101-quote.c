#include <stdio.h>
/**
 * main - prints only
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	while(str[i] != '\0')
	{
	putchar(str[i]);
	i++;
	}
	putchar('\n');
	
	return (0);

}
