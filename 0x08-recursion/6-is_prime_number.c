#include "main.h"

/**
 * is_prime_number - checks if an input integer is prime number
 * @n: input number
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (_divisible(n, d));
}

/**
 * _divisible - check if number is divisible
 * @x: integer parameter
 * @y: input parameter
 * Return: returns 0 if not dicisible
 */

int _divisible(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (y == x / 2)
		return (1);
	return (_divisible(x, y + 1));
}
