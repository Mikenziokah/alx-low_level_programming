#include "MAIN.H"

/**
 * print_alphabet - entry point
 * Return Always 0(success)
 */

	void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
		_putchar(c);
			c++;
			_putchar('\n');
			return (0);
}
