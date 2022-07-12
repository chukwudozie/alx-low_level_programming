#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int last = 0;
	int counter;

	while (s[last] != '\0')
		last++;

	counter = last - 1;

	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}

	_putchar('\n');
}
