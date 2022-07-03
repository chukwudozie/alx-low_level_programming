#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible two digits combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	char first = '0';
	char second = '1';

	while (first <= '9')
	{
		putchar(first);
		putchar(second);
		putchar(',');
		putchar(' ');
		first++;
	}

	return (0);
}
