#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: the string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
	a++;
	}
	for (; b < a ; b++)
	{
	dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

