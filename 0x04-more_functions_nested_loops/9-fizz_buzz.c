#include <stdio.h>
#include <stdlib.h>

/**
*main- prints nums
*
*Description:prints nums 0-100 multiples of 3 get fizz
*	multiples of 5 get buzz, both get fizzbuzz
*Return:0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
}
