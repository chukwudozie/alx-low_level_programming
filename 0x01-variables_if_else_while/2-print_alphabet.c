#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description - This program prints alphabets in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;

	}

	putchar('\n');
	return (0);

}
