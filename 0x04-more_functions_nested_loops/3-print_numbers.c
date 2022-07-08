#include "main.h"
#include <stdio.h>

/**
 * print_numbers - entry point
 * Return: void
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
