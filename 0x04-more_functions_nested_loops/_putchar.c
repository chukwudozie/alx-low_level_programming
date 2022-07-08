#include <unistd.h>

/**
 * _putchar - prints the character c to the stdout
 * @c: character to be printed
 * Return: 1 if success and -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
