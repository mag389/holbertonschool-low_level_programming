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
		printf("%08x: ", i);
		for (j = 0; j < 10 && j < size; j += 2)
		{
			printf("%02x%02x ", b[i + j], b[i + j + 1]);
		}
		for (j = 0; j < 10 && j < size; j++)
		{
			printf("%c", b[i + j]);
		}
		printf("\n");
	}
}
