#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument values
 * Return: sum on success or either 1 or Error on failure
 */

int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}

	for (count = 0; count < argc; count++)
	{
		if (!(isdigit(argv[argc][count])))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[count]);

	}

	printf("%d\n", sum);

	return (0);

}
