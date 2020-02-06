#include <stdio.h>
#include <stdlib.h>

/**
*main - prints reversed alphabet
*
*Description:returns backwards alphabet
*Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
