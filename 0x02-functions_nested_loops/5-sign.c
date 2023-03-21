#include "main.h"

/**
 * print_sign - Determines if the input is greater or equal to zero
 * @n: input as intenger
 * Return: 1 is greater than zero 0 is 0 ande -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
