#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int x;

	while (s[counter] != '\0')
		counter++;
	for (x = 0; x < counter; x++)
	{
		counter--;
		rev = s[x];
		s[x] = s[counter];
		s[counter] = rev;
	}
}
