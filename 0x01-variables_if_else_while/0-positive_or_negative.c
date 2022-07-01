#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - assign a random number to the variable n on each execution
 * if n is greater than 0: is positive, if n is 0: is zero
 * if n is less than 0: it is negative, followed by a new line
 * return: 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}else
	{
		printf("%d is zero\n", n);
	}
	return (0);

