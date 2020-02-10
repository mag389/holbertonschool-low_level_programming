#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*print_alphabet - prints alphabet
*Description:prints alphabet
*Return:0
*
*/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
