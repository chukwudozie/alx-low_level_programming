#include "main.h"

/**
 * print_last_digit - entry point
 * @n: input integer
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}
