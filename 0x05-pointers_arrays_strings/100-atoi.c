#include "main.h"

/**
 * _atoi -this converts string to int
 * @s: input string
 * Return: int value for string
 */

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = -1;
	int breaks = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10;
			result -= (s[i] - '0');
			breaks = 1;
		}
		else if (breaks == 1)
			break;

		i++;
	}

	result = sign * result;

	return (result);
}
