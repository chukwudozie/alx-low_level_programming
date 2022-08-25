#include <stdio.h>

/**
 * str_len - finds the length of a string
 * @c: pointer to the string
 * Return: length of the string
 */

size_t str_len(char *c)
{
	size_t i;

	for (i = 0; c[i]; i++)
		;
	return (i);
}
