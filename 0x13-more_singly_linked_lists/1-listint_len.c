#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: listint_t elements
 * Return: number of elements present
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
