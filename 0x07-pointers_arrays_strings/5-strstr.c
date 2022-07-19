#include "main.h"

/**
 * _strstr - function to locate substring
 * @haystack: pointer to char
 * @needle: substring in the haystack
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *n = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}

		if (!*needle)
		{
			return (result);
		}
		needle = n;
		result++;
		haystack = result;
	}

	return (0);
}
