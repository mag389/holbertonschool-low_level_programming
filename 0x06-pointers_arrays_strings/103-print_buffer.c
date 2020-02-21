#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_buffer - prints string with a buffer
*Return: void
*@b:buffer
*@size: size of the buffer
*/
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%00x: ", i);
		for (j = 0; j < 10 && j < size; j += 2)
		{
			printf("%x%x ", b[i + j], b[i + j]);
		}
		for (j = 0; j < 10 && j < size; j++)
		{
			printf("%c", b[i + j]);
		}
		printf("\n");
	}
}
