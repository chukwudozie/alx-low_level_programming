#include "main.h"

/**
 * puts_half - prints half of a string followed by new line
 * @s: input string
 * Return: void
 */

void puts_half(char *s)
{
	int length = 0;
	int counter = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	counter = length - 1;

	while (counter >= length / 2)
	{
		_putchar(s[counter]);
		counter--;
	}

	_putchar('\n');
}
