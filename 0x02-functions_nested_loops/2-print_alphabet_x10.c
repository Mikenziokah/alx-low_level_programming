#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lower case 10 times.
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a;
	int b = 0;

	while (b <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
}
