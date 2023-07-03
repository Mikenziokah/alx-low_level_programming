#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: elements in the lists_t nodes
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first, *second;

	first = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);
	first->n = n;
	first->next = NULL;
	if (!*head)
		*head = first;
	else
	{

	second = *head;
	while (second->next)
		second = second->next;
	second->next = first;
	}
	return (first);
}
