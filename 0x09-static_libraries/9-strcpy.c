#include "main.h"

/**
 * _strcpy -  copy string character
 * @dest: points to the destination
 * @src: pointer to the output
 * Return: character destination
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
