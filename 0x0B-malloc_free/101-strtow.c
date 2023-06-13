#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * wrdcnt - counts the number of words in a string
 * @k: string
 * Return: integer
 */
int wrdcnt(char *k)
{
	int x, y = 0;

	for (x = 0; k[x]; x++)
	{
		if (k[x] == ' ')
		{
			if (k[x + 1] != ' ' && k[x + 1] != '\0')
				y++;
		}
		else if (x == 0)
			y++;
	}
	y++;
		return (y);
}

/**
 * strtow - splits a string
 * @str: string
 * Return: pointer
 */
char **strtow(char *str)
{
	char **m;
	int a, b, c, d, e = 0, wc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	e = wrdcnt(str);
	if (e == 1)
		return (NULL);
	m = (char **)malloc(e * sizeof(char *));
	if (m == NULL)
		return (NULL);
	m[e - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			m[wc] = (char *)malloc(b * sizeof(char));
			b--;
			if (m[wc] == NULL)
			{
				for (c = 0; c < wc; c++)
					free(m[c]);
				free(m[e - 1]);
				free(m);
				return (NULL);
				}
				for (d = 0; d < b; d++)
					m[wc][d] = str[a + d];
				m[wc][d] = '\0';
				wc++;
				a += b;
				}
				else
						a++;
						}
						return (m);
}
