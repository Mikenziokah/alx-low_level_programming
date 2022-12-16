#include <stdio.h>

/**
 * main;Entry point
 * Return:Always0(success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')

		putchar(c);
	c--;

	putchar('\n');
	return (0);
}
