#include "main.h"

/**
 * get_endianness - this function checks endianness
 * Return: 0 if big endian and 1 if litle
 */

int get_endianness(void)
{
	int a;
	char *c;

	a = 1;
	c = (char *)&a;

	return (*c);
}
