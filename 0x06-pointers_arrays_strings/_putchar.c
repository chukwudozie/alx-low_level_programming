#include <unistd.h>

/**
 * _putchar - this writes characters to the standard output
 * @c: input character to be printed
 * Return: 1 for success and -1 for error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
