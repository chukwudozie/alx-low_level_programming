#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete node at index of list
 * @head: pointer to head
 * @index: index of node to be deleted
 * Return: 1 if success or -1 on error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	current = *head;

	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
