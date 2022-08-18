#include "main.h"


/**
 * get_power - calculates base to power p
 * @b: base
 * @p: power
 * Return: value of base to power p
 */

unsigned long int get_power(unsigned int b, unsigned int p)
{
	unsigned long int output;
	unsigned int i;

	output = 1;

	for (i = 1; i <= p ; i++)
	{
		output *= b;
	}
	return (output);
}


/**
 * print_binary - function to print binary representation of a number
 * @n: given input number
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char c;

	c = 0;

	divisor = get_power(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			c = 1;
			_putchar('1');
		}
		else if (c == 1 || divisor == 1)
		{
			_putchar('0');
		}

		divisor >>= 1;
	}


}
