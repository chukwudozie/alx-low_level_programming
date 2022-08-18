#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to input string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k;

	for (k = 0; *b; b++)
	{
		if (*b == '1')
			k = (k << 1) | 1;
		else if (*b == '0')
			k <<= 1;
		else
			break;
	}
	return (k);
}
