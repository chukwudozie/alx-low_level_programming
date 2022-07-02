#include <stdio.h>

/**
 * main - Entry point
 * Definition: print numbers with putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;

	}

	putchar('\n');

	return (0);
}
