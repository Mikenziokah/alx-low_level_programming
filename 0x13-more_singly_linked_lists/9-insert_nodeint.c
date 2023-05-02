#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: nodes
 * @idx: position
 * @n: nodes to be inserted
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *first;
	listint_t *second = *head;

	first = malloc(sizeof(listint_t));
	if (!head && !first)
	{
		return (NULL);
	first->n = n;
	first->next = NULL;
	}
	if (idx == 0)
	{
		first->next = second;
		second = first;
		return (first);
	}
	for (x = 0; second && x < idx; x++)
	{
		if (x == idx - 1)
		{
			first->next = second->next;
			second->next = first;
			return (first);
		}
		else
			second = second->next;
	}
	return (NULL);
}
