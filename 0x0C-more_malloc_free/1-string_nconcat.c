#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: input string
 * @s2: input string
 * @n: bytes
 * Return: the two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int y, z, s1_l, s2_l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	x = malloc(s1_l + n + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	for (y = 0; s1[y] != '\0'; y++)
		x[y] = s1[y];
	for (z = 0; z < n; z++)
	{
		x[y] = s2[z];
		y++;
	}
	x[y] = '\0';
	return (x);
}
