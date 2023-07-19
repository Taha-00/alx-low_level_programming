/* #include <unistd.h> */
/* more headers goes there */

/**
 * print_alphabet - a function
 * @a: is the character to be printed
 * Return: 0
 */

/* int _putchar(char c); */

void print_alphabet(void)
{
	char a = 'a';
	while(a < 26)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
