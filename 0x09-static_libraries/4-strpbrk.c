#include "main.h"
#include <stdio.h>


/**
 * _strpbrk - search for a set of byte in an input string
 * @s: input string
 * @accept: given bytes
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
