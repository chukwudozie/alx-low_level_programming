#include "main.h"

/**
 * malloc_checked - function to allocate memory with malloc
 * @b: bytes allocated
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
