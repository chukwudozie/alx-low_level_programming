#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: result
 */

int main(void)
{
	int c = 0;
	int result = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			result += c;
		}
		c++;
	}

	printf("%d\n", result);

	return (0);
}
