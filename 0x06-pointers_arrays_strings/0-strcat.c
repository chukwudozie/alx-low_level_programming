#include "main.h"

/**
 * _strcat - entry point
 * @dest: destination pointer
 * @src: source of pointer
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a = -1;

	for (int i = 0; dest[i] != '\0'; i++)
		;

		do {
			a++;
			dest[i] = src[a];
			i++;
		} while (src[a] != '\0');

	return (dest);
}
