#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node to the begining of a lists_t
 * @head:elements
 * @str: the duplicates
 * Return: NULL or the address of the new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	int length = 0;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	while (str[length])
		length++;

	x->len = length;
	x->str = strdup(str);
	x->next = *head;
	*head = x;
	return (x);
}
