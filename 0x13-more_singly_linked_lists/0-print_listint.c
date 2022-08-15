#include "lists.h"

/**
 * print_listint - function to print out all elements of list
 * @h: list pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodesCount = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodesCount++;
	}

	return (nodesCount);
}
