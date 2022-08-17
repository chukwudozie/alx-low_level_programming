#include "lists.h"

/**
 * sum_listint -  function to sum all data in a list
 * @head: pointer to list head node
 * Return: sum of all data or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
