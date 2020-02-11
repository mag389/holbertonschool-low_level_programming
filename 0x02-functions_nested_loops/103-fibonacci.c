#include <stdlib.h>
#include <stdio.h>

/**
*main - prints first 50 fibonacci's
*
*Descrirption: loops through fibonacci numbers printing them
*Return: 0
*/

int main(void)
{
	int i;
	long num1;
	long num2;
	long temp;
	long sum;

	num1 = 0;
	num2 = 1;
	for (i = 0; i < 32; i++)
	{
		temp = num1 + num2;
		sum = sum + temp;
		num1 = num2;
		num2 = temp;
	}
	printf("%ld\n", sum);
	return (sum);
}

