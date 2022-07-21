#include "main.h"

/**
 * _strlen_recursion - computes the length of a string by recursion
 * @s: pointer to string
 * Return: integer length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}
