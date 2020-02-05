#include <stdio.h>

/**
*main - returns phrases containg length of all data types
*	listed, then returns 0
*Description: prints text then returns int
*
*Main: returns text then int 0
*
*Return: return type int
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
