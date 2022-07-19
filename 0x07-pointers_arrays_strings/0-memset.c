#include "main.h"

/**
 * _memset - fills in n bytes
 * @s: pointer to the char
 * @b: input data
 * @n: number of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		s[num] = b;
	}

	return (s);
}
