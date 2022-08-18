#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to input string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k;
	int i;

	k = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		k <<= 1;

		if (b[i] == '1')
			k += 1;
	}
	return (k);
}
