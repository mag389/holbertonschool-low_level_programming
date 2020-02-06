#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints random # and the sign of it
*Description: prints whether the random generated number is positive
*Return: always 0
*
*Main: returns a random number along with it's sign
*
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
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("0 is zero");
	}
	return (0);
}
