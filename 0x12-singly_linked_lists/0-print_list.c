#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: input list to be printed
 * Return: number of nodes contained
 */

size_t print_list(const list_t *h)
{
	size_t nodesCount = 0;
	const list_t *input = h;

	while (input != NULL)
	{
		printf("[%d] %s\n", input->len, input->str != NULL ? input->str : "(nil)");
		input = input->next;
		nodesCount++;
	}

	return (nodesCount);
}
