#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: input value
 * Return: void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			printf("%d, ", n);
			n--;
		}

	}
	else
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			printf("%d, ", n);
			n++;
		}
	}
}
