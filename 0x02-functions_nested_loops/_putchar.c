#include <unistd.h>

/**
 * _putcharc - writes the char c to the std output
 *  return - 1 on success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
