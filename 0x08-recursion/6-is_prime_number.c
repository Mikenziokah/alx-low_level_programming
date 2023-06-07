#include "main.h"
/**
 * check_prime - find prime numbers first
 * @n: integer
 * @i: divisor
 * Return: 1 if prime
 */
int check_prime(int n, int i)
{
	if (n >= 2 && i == n)
	{
		return (1);
	}
	else if (n < 2)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
/**
 * is_prime_number - checking for the prime numbers
 * @n: integer
 * Return: prime number in n
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
