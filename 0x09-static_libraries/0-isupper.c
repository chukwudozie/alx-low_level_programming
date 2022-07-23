#include "main.h"

/**
 * _isupper - entry point
 * @n: number to be checked
 * Description: check if a character is upper case
 * Return: int
 */

int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
	{
		return (1);
	}
	else
		return (0);

}
