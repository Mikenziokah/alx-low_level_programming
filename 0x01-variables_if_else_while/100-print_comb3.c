#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int x;

	for (i = 48; i <= 57; i++)
	{
		for (x = 48; x <= 57; x++)
		{
			if (i > x)
			{
			putchar(i);
			putchar(x);
				if (i == 57 || x == 57)
					continue;
			{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

