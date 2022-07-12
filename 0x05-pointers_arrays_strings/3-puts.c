#include "main.h"

/**
 * _puts - print string to sdtout
 * @s: input string
 * Return: void
 */

void _puts(char *s)
{
	int length = 0;
	char c = s[length];

	while (s[length] != '\0')
	{
		_putchar(c);
		length++;
	}

	_putchar('\n');
}
