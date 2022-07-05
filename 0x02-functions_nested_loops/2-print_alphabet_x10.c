#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 * Description - print the alphabets 10 times
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c;
	int count = 0;

	while (count < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		count++;
	}
}
