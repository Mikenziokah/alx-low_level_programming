#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 99; a++)
		for (b = 0; b < 99; b++)
			if (b > a)
				putchar(a / 10 + '0');
	putchar(a % 10 + '0');
	putchar(' ');
	putchar(b / 10 + '0');
	putchar(b % 10 + '0');
	putchar(',');
	putchar('\n');
	return (0);
}

