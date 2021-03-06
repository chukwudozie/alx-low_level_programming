#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: input matrix
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, firstsum = 0, secondsum = 0;

	while (i < size)
	{
		firstsum += *(a + (size * i + i));
		secondsum += *(a + (size * i + size - 1 - i));
		i++;
	}
	printf("%d, ", firstsum);
	printf("%d\n", secondsum);

}
