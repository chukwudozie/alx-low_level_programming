#include "lists.h"

/**
 * free_listint2 - function that frees a list and sets head to NULL
 * @head: pointet to list head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
