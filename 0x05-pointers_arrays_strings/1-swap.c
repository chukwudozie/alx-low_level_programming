#include "main.h"

/**
 * swap_int - entry point
 * @a: input number for swap
 * @b: input number for swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
