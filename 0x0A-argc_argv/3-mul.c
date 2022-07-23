#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int product = 1;

	if (argc > 2)
	{
		product *= atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);

		return (0);
	}

	printf("Error\n");

	return (1);
}
