#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: pointer
 * Return: always 0
 */
void free_listint(listint_t *head)
{
	listint_t *first;

	while (head)
	{
		first = head;
		head = head->next;
		free(first);
	}
}
