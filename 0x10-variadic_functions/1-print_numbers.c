#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of args passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int nums;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(list, int);
		printf("%d", nums);

		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
