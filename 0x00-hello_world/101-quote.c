#include <stdio.h>

/**
*main- prints the quote returns zero
*
*Main: returns type int
*
*Description: prtins a quote and returns 0
*Return: type int
*/
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*s)
		putchar(*s++);
	return (1);

}
