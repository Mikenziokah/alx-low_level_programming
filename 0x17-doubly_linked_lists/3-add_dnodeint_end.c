#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a dlistint_t list
 * @head: double pointer
 * @n: elements
 * Return: new nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *nodes;

	nodes = malloc(sizeof(dlistint_t));
	if (nodes == NULL)
		return (NULL);
	nodes->next = NULL;
	nodes->n = n;

	last_node = *head;
	if (last_node == NULL)
	{
		nodes->prev = NULL;
		*head = nodes;
		return (nodes);
	}

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = nodes;
		nodes->prev = last_node;
		return (nodes);
}
