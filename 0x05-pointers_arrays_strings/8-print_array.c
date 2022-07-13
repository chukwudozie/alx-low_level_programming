#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @a: input array
 * @n: number of elements in array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	putchar('\n');
}
