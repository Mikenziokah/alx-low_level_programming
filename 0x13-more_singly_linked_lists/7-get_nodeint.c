#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer
 * @index: node to get
 * Return: pointer of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *bytes = head;
	unsigned int x;

	while (bytes && x < index)
	{
		bytes = bytes->next;
		x++;
	}
	return (bytes);
}
