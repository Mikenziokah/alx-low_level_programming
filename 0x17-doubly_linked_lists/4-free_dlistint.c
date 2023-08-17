#include "lists.h"
/**
 * free_dlistint - frees dlistint list
 * @head: pointer
 * Return: always 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_list;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		new_list = head;
		head = head->next;
		free(new_list);
	}
	free(head);
}
