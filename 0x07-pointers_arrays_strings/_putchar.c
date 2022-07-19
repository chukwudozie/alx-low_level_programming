#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: input character
 * Return: 1 on success and -1 when there is error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
