#include "main.h"

/**
 * _puts_recursion - function to print string followed by new line
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		_putchar(s[m]);
		m++;
	}

	_putchar('\n');
}
