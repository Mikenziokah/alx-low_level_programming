#include "main.h"
/**
 * _print_rev_recursion - prints a srting in reverse
 * @s: string input
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
