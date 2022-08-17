#include "lists.h"

/**
 * pop_listint - function to delete the head node of a list
 * @head: pointer to head
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
