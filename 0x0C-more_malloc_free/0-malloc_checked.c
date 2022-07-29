#include "main.h"

/**
 * malloc_checked - function to allocate memory with malloc
 * @b: bytes allocated
 * Return: pointer to memory allocated
 */

void malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
