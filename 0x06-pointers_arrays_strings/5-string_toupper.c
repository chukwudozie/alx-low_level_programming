#include "main.h"

/**
 * string_toupper - change all lowercase characters to upper case
 * @s: input string to be converted
 * Return: void
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
