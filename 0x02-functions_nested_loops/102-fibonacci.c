#include <stdlib.h>
#include <stdio.h>

/**
*main - returns sum of integers divisible by 3 or 5
*
*Descrirption: as above
*Return: 0
*@n: fib number index up to
*/
long fibo(int n);

int main(void)
{
	int i;
	long num1;
	long num2;
	long temp;

	num1 = 0;
	num2 = 1;
	for (i = 0; i < 50; i++)
	{
		temp = num1 + num2;
		printf("%ld, ", num1 + num2);
		num1 = num2;
		num2 = temp;
	}
	printf("\n");
	return (50);
}

/**
*fibo - fibonacci value up to n
*@n: highest fib num
*Return:gives long int of the fib num
*/
long fibo(int n)
{
	if (n < 2)
		{
		return (n);
		}
	else
		{
		return (fibo(n - 1) + fibo(n - 2));
		}
}
