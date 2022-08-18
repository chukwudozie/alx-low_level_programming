#include "main.h"

/**
 * set_bit - set value of bit to 1 at given index
 * @n: pointer
 * @index: given position
 * Return: 1 on success or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num = 1 << index;

	*n = *n | num;
	return (1);
}
