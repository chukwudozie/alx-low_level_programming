#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc > 2)
	{
		product *= argv[1] * argv[2];
		printf("%d\n", product);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
