#include "main.h"

/**
 * _puts - print string to sdtout
 * @s: input string
 * Return: void
 */

void _puts(char *s)
{
	int length = 0;
	char c;

	while (s[length] != '\0')
	{
		c = s[length];
		_putchar(c);
		length++;
	}

	_putchar('\n');
}
