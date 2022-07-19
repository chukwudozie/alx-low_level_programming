#include "main.h"

/**
 * _strspn - gets the length of a substring
 * @s: original string
 * @accept: substring
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	char *d = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				num++;
				break;
			}

			if (!(*--accept))
				break;
			accept = t;
		}
	}

	return (num);
}
