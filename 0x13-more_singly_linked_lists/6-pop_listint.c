#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer
 * Return: deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *bytes;
	int x;

	if (!head || !*head)
		return (0);

	bytes = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = bytes;
	return (x);
}
