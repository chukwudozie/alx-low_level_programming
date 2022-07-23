#include "main.h"

/**
 * _isdigit - entry point
 * @c: number to check
 * Return: 1 if c is digit and 0 if c is not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
