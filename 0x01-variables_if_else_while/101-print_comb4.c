#include <stdio.h>

/**
 * main - Entry point
 * Description: print three digits without repetition
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first;
	int second;
	int third = 0;

	while (third <= 9)
	{
		second = 0;

		while (second <= 9)
		{
			first = 0;

			while (first <= 9)
			{
				if (first != second && second != third && third < second && second < first)
				{
					putchar('0' + third);
					putchar('0' + second);
					putchar('0' + first);

					if (first + second + third != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				first++;
			}
			second++;

		}
		third++;
	}

	putchar('\n');

	return (0);
}
