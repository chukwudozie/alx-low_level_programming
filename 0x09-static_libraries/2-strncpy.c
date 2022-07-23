#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer for the string to be copied to
 * @src: intial string pointer
 * @n: number of bytes to be copied
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0; length < n && src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}

	for ( ; length < n; length++)
	{
		dest[length] = '\0';
	}

	return (dest);
}
