#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the parameters
 * @n: number of extra parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n)
{
	unsigned int i = 0;
	va_list list;
	int sum = 0;

	va_start(list, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);

	return (sum);

}
