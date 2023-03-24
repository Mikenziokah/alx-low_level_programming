#include "main.h"

/**
 * _isupper - checks for upper characters
 * @c: the letter to be checked
 * Return: 1 for uppercase 0 for another
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
