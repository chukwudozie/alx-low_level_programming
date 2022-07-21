#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: input number
 * Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_sqrt(1, n));
}

/**
 * _find_sqrt - use recursion to find square root
 * @a: previous value of number
 * @b: the root
 * Return: desired root
 */

int _find_sqrt(int a, int b)
{
	if (a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	return (_find_sqrt(a + 1, b));
}
