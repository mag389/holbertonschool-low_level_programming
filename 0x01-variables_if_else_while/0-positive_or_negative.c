#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints random # and the sign of it
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
		printf("%d is zero\n", n);
	}
	return (0);
}
