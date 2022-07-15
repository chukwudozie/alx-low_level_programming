#include "main.h"

/**
 * leet -transform characters
 * @s: input character array
 * Return: new character array
 */

char *leet(char *s)
{
	int a, b;

	int small[] = "aeotl";
	int big[] = "AEOTL";
	int nums[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (s[a] == small[b] || s[a] == big[b])
			{
				s[a] = nums[b];
				break;
			}
		}
	}
	return (s);
}
