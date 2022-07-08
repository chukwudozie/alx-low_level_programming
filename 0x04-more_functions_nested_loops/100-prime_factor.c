#include <stdio.h>

/**
 * main - prints prime numbers
 * Return: Always 0
 */

int main(void)
{
	unsigned long int y, x = 612852475143;

	for (y = 3; y < 500000; y = y + 2)
	{
		while ((x % y == 0) && (x != y))
			x /= y;
	}

	printf("%lu\n", x);

	return (0);
}
