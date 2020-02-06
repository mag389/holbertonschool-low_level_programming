#include <stdio.h>
#include <stdlib.h>

/**
*main - pritns whole alphabet
*
*Description
*Return: 0
*/
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
