#include <stdio.h>
void my_start(void) __attribute__((constructor));
/**
* my_start - prints a line before the main function runs
* Return: void
*/
void my_start(void)
{

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

