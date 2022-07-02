#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 * main - Entry point
 * Get the last digit of a number
 *
 * Return: Always 0 (Succss)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit < 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", nm lastDigit);
	}
	return (0);

}
