#include "holberton.h"

/**
* get_endianness - returns endianness of machine
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);

}
