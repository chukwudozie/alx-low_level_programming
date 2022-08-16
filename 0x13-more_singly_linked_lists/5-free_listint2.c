#include "lists.h"

/**
 * free_listint2 - function that frees a list and sets head to NULL
 * @head: pointet to list head
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	current = *head;

	while (current && current->next != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
