#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: size of array
 * Return: output array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pointer;

	for (pointer = 0; pointer < n; pointer++)
	{
		dest[pointer] = src[pointer];
	}

	return (dest);
}
