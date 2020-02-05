#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",61);
	return (1);

}
