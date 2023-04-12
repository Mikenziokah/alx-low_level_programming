#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: strinf 2
 * Return: the two strings and NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *num;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	num = malloc(sizeof(char) * (x + y + 1));
	if (num == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		num[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		num[x] = s2[y];
		x++, y++;
	}
	num[x] = '\0';
	return (num);
	free(num);
}
