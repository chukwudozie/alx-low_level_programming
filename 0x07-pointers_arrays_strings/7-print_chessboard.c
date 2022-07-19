#include "main.h"

/**
 * print_chessboard - a function to print a chessboard
 * @a: input array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}

		_putchar('\n');
		i++;
	}
}
