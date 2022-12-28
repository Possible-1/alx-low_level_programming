#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Descripton: prints if last digit is greater than 5
 * Return: Always 0 (success)
 */

int main(void)
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		n = n % 10;
		if (n > 5)
		{
			printf("The last digit of %d is %d and is greater than 5\n", n);
		}
		else if (n == 0)
		{
			printf("The last digit of %d is %d and is 0\n", n);
		}
		else if (n < 6 != 0)
		{
			printf("The last digit of %d is %d and is less 6 and not 0\n", n);
		return (0);
	}
