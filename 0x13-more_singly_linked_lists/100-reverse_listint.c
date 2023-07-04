#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: nodes to be deleted
 * Return: the deleted lists
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *next;

	if (head != NULL || *head != NULL)
		return (NULL);
	first = *head;

	while (first != NULL)
	{
		next = first->next;
		first->next = *head;
		*head = first;
		first = next;
	}
	return (*head);
}
