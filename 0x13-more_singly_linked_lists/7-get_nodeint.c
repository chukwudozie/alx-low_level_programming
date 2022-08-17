#include "lists.h"

/**
 * get_nodeint_at_index - function to return the nth node of a list
 * @head: pointer to list node head
 * index: index of the node starting at 0
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (y < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		y++;
	}

	return (head);
}
