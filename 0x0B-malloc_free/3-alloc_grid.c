#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array
 * @width: area base
 * @height: area base
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int b, c;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < height; b++)
		{
			tab[b] = malloc(sizeof(**tab) * width);
			if (tab[b] == 0)
			{
				while (b--)
					free(tab[b]);
						free(tab);
						return (NULL);
			}
		for (c = 0; c < width; c++)
			tab[b][c] = 0;
		}
	}
	return (tab);
}
