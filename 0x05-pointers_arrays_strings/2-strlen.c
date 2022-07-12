#include "main.h"

/**
 * _strlen - computes length of a string
 * @s: input string
 * Return: length of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
