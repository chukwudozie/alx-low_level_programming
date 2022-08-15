#include "lists.h"

/**
 * listint_len - this function returns the number of elements in a linked list
 * @h: list pointer
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t elementsCount = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		elementsCount++;
	}

	return (elementsCount);
}
