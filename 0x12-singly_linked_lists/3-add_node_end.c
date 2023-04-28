#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node to the end of a list_t
 * @head: element
 * @str: dublicated nodes
 * Return: address to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node, *second_node;
	size_t x;

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);
	first_node->str = strdup(str);

	for (x = 0; str[x]; x++)
		first_node->len = x;
	first_node->next = NULL;
	second_node = *head;

	if (second_node == NULL)
	{
		*head = first_node;
	}
	else
	{
		while (second_node->next != NULL)
			second_node = second_node->next;
		second_node->next = first_node;
	}
	return (*head);
}
