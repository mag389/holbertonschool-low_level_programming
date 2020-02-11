#include <stdlib.h>
#include <stdio.h>

/**
*main - returns sum of integers divisible by 3 or 5
*
*Descrirption: as above
*Return: 0
*/

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
		{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		}
	printf("%d\n", sum);
	return (0);
}
