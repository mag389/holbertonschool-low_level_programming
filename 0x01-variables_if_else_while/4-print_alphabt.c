#include <stdio.h>
#include <stdlib.h>

/**
*main - prints whole alphabet except eq
*
*Description:returns most of alphabet
*Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
