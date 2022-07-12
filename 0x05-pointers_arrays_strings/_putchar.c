#include <unistd.h>

/**
 * _putchar - prints the input character c to the stdout
 * @c: input chareacter
 * Return: 1 if success and -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
