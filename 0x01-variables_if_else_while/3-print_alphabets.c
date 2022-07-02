#include <stdio.h>

/**
 * main - Entry point
 * Description - print alphabets in both lower and upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		putchar(small);
	}

	char big = 'A';

	while (big <= 'Z')
	{
		putchar(big);
	}
	putchar('\n');

	return (0);
}
