#include "main.h"

/**
 * leet - encodes strings
 * @n: input
 * Return: input value of n
 */

char *leet(char *n)
{
	int a;
	int b;

	char i1[] = "aAeEoOtTlL";
	char i2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == i1[b])
			{
				n[a] = i2[b];
			}
		}
	}
	return (n);
}
