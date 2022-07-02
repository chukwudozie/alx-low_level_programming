#include <stdio.h>

/**
 * main - Entry point
 * Description - print alphabets in both lower and upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char small = 'a';
	char big = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}

	while (big <= 'Z')
	{
		putchar(big);
		big++;
	}
	putchar('\n');

	return (0);
}
