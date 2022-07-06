#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: input value
 * Return: void
 */

void print_to_98(int n)
{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
		printf("\n");
}
