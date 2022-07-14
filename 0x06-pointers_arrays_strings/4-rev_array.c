#include "main.h"

/**
 * reverse_array - reverses the content of an integer array
 * @a: input integer array
 * @n: number of elemnts in a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int reversed;

	while (i < n / 2)
	{
		reversed = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = reversed;
		i++;
	}
}
