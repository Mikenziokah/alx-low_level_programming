#include "main.h"
/**
 * _long - finds the length of a string
 * @s: string
 * Return: length of string s
 */
int _long(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _long(s + 1));
	}
}
/**
 * _palindrome - checks if a string is palindrome return 1 else 0
 * @s: string
 * @i: start
 * @j: end
 * Return: 1 if its palidrome else 0
 */
int _palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (_palindrome(s, i + 1, j - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - verifies if a string is palindrome
 * @s: string
 * Return: 1 if its a palindrome else 0
 */
int is_palindrome(char *s)
{
	int length = _long(s);

	return (_palindrome(s, 0, length - 1));
}
