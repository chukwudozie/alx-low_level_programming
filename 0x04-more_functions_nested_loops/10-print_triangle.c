#include "main.h"

/**
 * print_triangle - check
 * @size : integer type
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = i; j <= size; j++)
		{
			if (j <= (size - 1))
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
