#include "main.h"

/**
 * leet -transform characters
 * @s: input character array
 * Return: new character array
 */

char *leet(char *s)
{
	int i = 0;
	int j;

	char digits[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
				s[i] = digits[j];
		}
		i++;
	}

	return (s);
}
