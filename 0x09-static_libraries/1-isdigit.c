#include "main.h"

/**
 * _isdigit - checks for a digit through 0 to 9
 * @c: digit to be checked
 * Return: 1 if its a digit 0 anyother
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
