#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: An input string to be printed between numbers
 * @n: number of parameters
 * @...: Other parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *word;

	va_start(list, n);

	for (; i < n; i++)
	{
		word = va_arg(list, char*);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);

	}

	printf("\n");
	va_end(list);
}
