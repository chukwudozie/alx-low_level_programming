#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - This function adds a new node at beginning of a list
 * @head: pointer to the head of list
 * @str: input string
 * Return: Address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *output;
	int c;

	for (c = 0; str[c] != '\0'; c++)
		;

	output = malloc(sizeof(list_t));

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	output->str = strdup(str);
	if (output->str == NULL)
	{
		free(output);
		return (NULL);
	}

	output->len = c;
	output->next = *head;
	*head = output;

	return (*head);

}
