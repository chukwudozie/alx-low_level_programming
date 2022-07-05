#include "main.h"

/**
 * print_alphabet - Entry Point
 * Description - print alphabets in lower case
 * Return: always 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
