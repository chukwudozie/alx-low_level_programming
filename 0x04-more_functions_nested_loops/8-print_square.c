#include "main.h"

/**
 * print_square - print squares
 * @n: size of the square
 * Return: Always 0.
 */

void print_square(int n)
{
	int m = 0;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (m < n)
	{
		i = 0;

		while (i < n)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		m++;
	}
}
