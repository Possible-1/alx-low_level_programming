#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description : This code prints random numbers
 * while numbers greater than zero is positive
 * zero is zero
 * number less than 0 is negative
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0)\n);
	n = rand() - RAND_MAX / 2;
	/* your code goes here*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
