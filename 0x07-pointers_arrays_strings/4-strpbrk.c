#include "main.h"


/**
 * _strpbrk - search for a set of byte in an input string
 * @s: input string
 * @accept: given bytes
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int num;

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
