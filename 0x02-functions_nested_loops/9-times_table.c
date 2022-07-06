#include "main.h"

/**
 * times_table -entry point
 * Description: print nine times table
 * Return: void
 */

void times_table(void)
{
	int a = 0;
	int b;
	int product;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			product = a * b;

			if (b == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 10)
			{
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}

			if (b < 9)
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
