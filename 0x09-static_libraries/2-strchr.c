#include "main.h"

/**
 * _strchr - locates charcters in astring
 * @c: charcter to be searched
 * @s: string input
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (&s[i]);
	}
	return (0);
}

