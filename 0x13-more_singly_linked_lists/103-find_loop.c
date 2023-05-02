#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: search list
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first;
	listint_t *second;

	if (head == NULL)
		return (NULL);
	for (second = head->next; second != NULL; second = second->next)
	{
		if (second == second->next)
			return (second);
		for (first == head; first != second; first = first->next)
			if (first == second->next)
				return (second->next);
	}
	return (NULL);
}
