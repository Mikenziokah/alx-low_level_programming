#include <stdio.h>
/**
 * main entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
		for (b = 0; b < 10; b++)
			if (b > a)
				for (c = 0; c < 10; c++)
					if (c > b)
						putchar(a);
	putchar(b);
	putchar(c);
	putchar(' ');
	putchar('\n');
		return (0);
}
