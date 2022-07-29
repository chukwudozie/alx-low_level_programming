#include <unistd.h>

/**
 * _putchar - prints an input character to the STDOUT
 * @c: input character
 * Return: 1 on success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
