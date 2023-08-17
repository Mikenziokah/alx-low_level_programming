#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t  *nodes;

		nodes = h;
	while (nodes != NULL)
	{
		count++;
		printf("%d\n", nodes->n);
		nodes = nodes->next;
	}
	return (count);
}
