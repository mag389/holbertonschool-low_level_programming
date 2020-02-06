#include <stdio.h>
#include <stdlib.h>

/**
*main - prints whole alphabet
*
*Description:retruns entire alphabet
*Return: 0
*/
int main(void)
{
	char ch;
	for ( ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
