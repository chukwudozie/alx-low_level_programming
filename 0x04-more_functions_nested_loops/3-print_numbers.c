#include "main.h"
#include <stdio.h>

/**
 * print_numbers - entry point
 * Return: void
 */

void print_numbers(void)
{
	char num = '0';

	while (num < 10)
	{
		_putchar(num);
	}
	_putchar('\n');
}
