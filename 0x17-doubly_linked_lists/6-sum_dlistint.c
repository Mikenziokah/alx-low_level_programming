#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data
 * @head: pointer
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_all = 0;

	while (head != NULL)
	{
		sum_all += head->n;
		head = head->next;
	}
	return (sum_all);
}
