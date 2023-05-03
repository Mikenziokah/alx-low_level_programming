#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - find length
 * @k: string
 * Return: integer
 */
int _strlen(char *k)
{
	int size = 0;

	for (; k[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: strinf 2
 * Return: the two strings and NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x, size1, size2;
	char *a;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	a = malloc((size1 + size2) * sizeof(char) + 1);
	if (a == 0)
		return (0);
	for (x = 0; x <= size1 + size2; x++)
	{
		if (x < size1)
			a[x] = s1[x];
		else
			a[x] = s2[x - size1];
	}
	a[x] = '\0';
	return (a);
}
