#include <unistd.h>

/**
 * _putchar - write character to the standard ourput
 * @c: input character
 * Return: 1 on success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
