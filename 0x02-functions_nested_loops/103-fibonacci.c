#include <stdlib.h>
#include <stdio.h>

/**
*main - prints even fibonacci's less than 4m
*
*Descrirption: loops through fibonacci adding sum
*Return: sum
*
*/
int main(void)
{
	int i;
	int num1;
	int num2;
	int temp;
	int sum;

	num1 = 0;
	num2 = 1;
	for (i = 0; i < 35; i++)
	{
		temp = num1 + num2;
		if (temp % 2 == 0 && temp < 4000000)
			{
			sum = sum + temp;
			}
		num1 = num2;
		num2 = temp;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
