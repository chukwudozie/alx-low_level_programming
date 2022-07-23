#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 always on success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
