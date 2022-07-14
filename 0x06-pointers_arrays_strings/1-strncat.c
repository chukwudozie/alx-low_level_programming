#include "main.h"

/**
 * _strncat- concatenates two stringsy
 * @dest: pointer to return output
 * @src: source pointer
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}

	dest[length + i] = '\0';

	return (dest);

}
