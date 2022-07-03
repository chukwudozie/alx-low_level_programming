#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible two digits combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first = 0;
	int second = 0;

	while (second <= 9)
	{
		while (first <= 9)
		{
			if (first != second && first < second)
			{
				putchar('0' + second);
				putchar('0' + first);
				if (first + second != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			first++;
		}
		second++;
	}

	putchar('\n');

	return (0);
}
