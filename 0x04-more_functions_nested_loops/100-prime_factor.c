#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
*main - finds and prints largest factor
*    of number 612852475143
*Return:0
*/
int main(void)
{
	long n = 612852475143;
	long l = 1;
	int i;

	for (i = 1; i <= sqrt(n); i++)
	{
		if ((n / i) * i == n)
		{
/*			printf("%d ", i);*/
			l = i;
		}
	}
	printf("%ld\n", n / l);
	return (0);
}
