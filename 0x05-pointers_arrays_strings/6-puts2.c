#include "main.h"

/**
 * puts2 - entry point
 * @s: input string
 * Return: void
 */

void puts2(char *s)
{
	int length = 0;
	int counter = 0;

	while (s[length] != '\0')
		length++;

	while (counter < length)
	{
		_putchar(s[counter]);
		counter = counter + 2;
	}
	_putchar('\n');
}
