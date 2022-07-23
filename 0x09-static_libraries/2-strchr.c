#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: input string
 * @c: target character
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (0);
}
