#include <stdlib.h>
#include <stdio.h>

/**
*main - prints even fibonacci's thru 98th
*
*Descrirption: loops through fibonaccis printing
*Return: sum
*
*/
int main(void)
{
	int i;
	unsigned long num1;
	unsigned long num2;
	unsigned long temp;

	num1 = 0;
	num2 = 1;
	for (i = 0; i < 98; i++)
	{
		temp = num1 + num2;
		printf("%lu", temp);
		if (i < 97)
			printf(", ");
		num1 = num2;
		num2 = temp;
	}
	printf("\n");
	return (0);
}
