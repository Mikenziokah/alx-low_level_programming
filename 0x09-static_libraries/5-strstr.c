#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: string to be found in
 * @haystack:  string to be searched
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0;

	if (*needle == 0)
	return (haystack);
	while (*haystack)
	{
	if (haystack[j] == needle[j])
	{
	j++;
	}
	}
}

