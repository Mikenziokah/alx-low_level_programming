#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer
 * Return: addition
 */
int sum_listint(listint_t *head)
{
	listint_t *bytes = head;
	int sum;

	while (bytes)
	{
		sum += bytes->n;
		bytes = bytes->next;
	}
	return (sum);
}
