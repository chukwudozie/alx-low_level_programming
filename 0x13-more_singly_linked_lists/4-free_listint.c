#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: list pointer
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current->n);
		free(current);
		current = temp;
	}

}
