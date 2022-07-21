#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: input number
 * Return: integer factorial, -1 for negative numbers and 1 for 0 and 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if (n == 1)
		return (1);
	return (n * factorial(n - 1));

}
