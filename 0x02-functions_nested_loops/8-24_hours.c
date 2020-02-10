#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*jack_bauer- tells absolute val of num
*
*Description:print the times
*Return:nothing
*
*
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
		{
		for (j = 0; j < 60; j++)
			{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
			}
		}
}
