#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the parameters
 * @n: number of extra parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;


	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(list, int);

	va_end(list);

	return (sum);

}
