#include "main.h"

/**
 * cap_string - capitalize every word of a string
 * @s: input string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	char sep[] = ",\t;\n; .!?\"(){}";
	int flag, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		flag = 0;
		if (a == 0)
		{
			flag = 1;
		}
		else
		{
			for (b = 0; sep[b] != '\0'; b++)
			{
				if (s[a - 1] == sep[b])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			if (s[a] <= 'z' && s[a] >= 'a')
			{
				s[a] -= ('a' - 'A');
			}
		}
	}
	return (s);
}
