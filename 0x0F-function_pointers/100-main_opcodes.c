#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - prints computer opcodes
*Return: 0 on success 1 on failure
*@argc: number of argyuments
*@argv: argument array
*/
int main(int argc, char *argv[])
{
	int i, number;
	char *ptr;

	ptr = (char *)&main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < number; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i < number - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
