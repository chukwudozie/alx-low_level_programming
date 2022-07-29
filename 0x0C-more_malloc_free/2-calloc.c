#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int b)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory to an array with malloc
 * @n: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int n. unsigned int size)
{
	void *ptr;

	if (n == 0 || size == 0)
		return (NULL);

	ptr = malloc(n * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, (n * size));

	return (ptr);
}
