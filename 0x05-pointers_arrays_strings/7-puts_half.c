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
	if (length % 2 == 0)
	{
		for (counter = (length / 2); counter < length; counter++)
		{
			_putchar(s[counter]);
		}
	}
	else
	{
		for (counter = ((length + 1) / 2); counter < length; counter++)
		{
			_putchar(s[counter]);
		}
	}


	_putchar('\n');
}
