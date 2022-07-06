#include "main.h"


/**
 * jack_bauer - Entry point
 * Return: void
 */


void jack_bauer(void)
{
	int min;
	int hour = 0;

	while (hour <= 23)
	{
		min = 0;

		while (min <= 59)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');

			min++;
		}
		hour++;
	}
}
