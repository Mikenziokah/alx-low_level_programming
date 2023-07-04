#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all data
 * @head: pointer
 * Return: addition
 */
int sum_listint(listint_t *head)
{
	listint_t *bytes = head;
	int sum = 0;

	while (bytes)
	{
		sum += bytes->n;
		bytes = bytes->next;
	}
	return (sum);
}
