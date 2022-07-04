#include <stdio.h>

/**
 * main - Entry Point
 * Description: print double digits from 00 to 99
 * Return: Always0 (Success)
 */

int main(void)
{
	int c = 0;
	int d;
	int e;
	int cc;
	int dd;
	int ee;

	while (c < 99)
	{
		d = (c / 10 + '0');
		e = (c % 10 + '0');
		cc = 0;

		while (cc < 100)
		{
			dd = (cc / 10 + '0');
			ee = (cc % 10 + '0');

			if (c < cc)
			{
				putchar(d);
				putchar(e);
				putchar(' ');
				putchar(dd);
				putchar(ee);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			cc++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
