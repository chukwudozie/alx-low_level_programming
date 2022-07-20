#include <unistd.h>

/**
 * _putchar - function that prints character to standard output
 * @c: input character to be printed
 * Return: 1 if success or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
