#include "main.h"
#include <stdio.h>

/**
 * print_times_table -  entry point
 * @n: input number
 * Return: void
 */

void print_times_table(int n)
{
	int a = 0, b, product;

	if (n < 0 || n > 15)
		return;
	while (a <= n)
	{
		b = 0;

		while (b <= n)
		{
			product = a * b;
			if	 (b == 0)
			{
				_putchar('0' + product);
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
			else
			{
				_putchar('0' + product / 100);
				_putchar('0' + (product - 100) / 10);
				_putchar ('0' + product % 10);
			}

			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
