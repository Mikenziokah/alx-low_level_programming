#include "lists.h"
/**
 * get_dnodeint_at_index - returns a nth nde of a dlistint list
 * @head: pointer
 * @index: spot of the node
 * Return: the nth position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;
	dlistint_t *id;

	if (head == NULL)
		return (NULL);

	id = head;
	head->n = id->n;
	x = 0;

	while (id != NULL)
	{
		if (x == index)
			return (id);
		x++;
		id = id->next;
	}
	return (NULL);
}
