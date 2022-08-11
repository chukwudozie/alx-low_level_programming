#include "lists.h"

/**
 * list_len - function to return number of elements in a list
 * @h: list pointer
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	const list_t *inputList = h;
	size_t count = 0;

	while (inputList != NULL)
	{
		inputList = inputList->next;
		count++;
	}

	return (count);
}
