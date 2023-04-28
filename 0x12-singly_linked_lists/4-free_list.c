#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees list_t list
 * @head: elements to be released
 */
void free_list(list_t *head)
{
	list_t *second_node;

	while ((second_node = head) != NULL)
	{
		head = head->next;
		free(second_node->str);
		free(second_node);
	}
}
