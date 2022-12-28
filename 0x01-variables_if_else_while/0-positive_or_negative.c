#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - This code begins at main
 * Description : This code prints random numbers
 * while numbers greater than 0 is positive
 * 0 is zero
 * number less than 0 is negative
 * Return : Always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
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
