#include "main.h"
/**
 * factorial - return a factorial of a number
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
