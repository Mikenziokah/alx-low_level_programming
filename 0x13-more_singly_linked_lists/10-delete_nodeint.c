#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head:index address
 * @index: pointer
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *first = NULL;
	listint_t *second = NULL;

	if (!first || *head)
		return (-1);
	if (!index)
	{
		first = (first)->next;
		free(first);
		return (1);
	}
	while (first)
	{
		if (x == index)
		{
			second->next = first->next;
			free(first);
			return (1);
		}
		x++;
		second = first;
		first = first->next;
	}
		return (-1);
}
