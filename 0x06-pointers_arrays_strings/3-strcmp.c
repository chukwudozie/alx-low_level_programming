#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first input string
 * @s2: second input string
 * Return: 1 if strings are the same and 0 if otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int position;

	for (position = 0; s1[position] != '\0' || s2[position] != '\0'; position++)
	{
		if (s1[position] !=  s2[position])
		{
			return (s1[position] - s2[position]);
		}
	}

	return (0);
}
