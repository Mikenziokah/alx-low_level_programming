#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - returns 1 if the inut is a prime number
 * @n: number to evaluate
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
