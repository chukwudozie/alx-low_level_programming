#include "lists.h"

/**
 * add_nodeint - function to add new node at the beginning of a list
 * @head: address of first node
 * @n: duplicated element
 * Return: Address of new element or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);

}
