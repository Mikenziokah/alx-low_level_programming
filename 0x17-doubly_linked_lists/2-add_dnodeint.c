#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of dlistint_t list
 * @head: double pointer
 * @n: element
 * Return: new nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		new->prev = NULL;
		new->next = (*head);
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	new->next = NULL;
	new->prev = NULL;
	*head = new;
	return (new);
}
