#include "main.h"

/**
 * print_square - print squares
 * @n: size of the square
 * Return: Always 0.
 */

void print_square(int n)
{
	int m;

	m = n;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (n > 0)
	{

		while (m > 0)
		{
			_putchar('#');
			m--;
		}
		n--;
		_putchar('\n');
	}
	_putchar('\n');
}
