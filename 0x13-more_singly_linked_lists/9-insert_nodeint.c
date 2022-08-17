#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert new node at given position
 * @head: pointer to head
 * @idx: list index for the insert
 * @n: duplicate data
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;

		for (; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
