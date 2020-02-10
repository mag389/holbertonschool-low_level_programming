#include <stdio.h>
#include <unistd.h>

/**
*main-prints output using only _putchar
*
*description:prints holberton
*Return:0
*
*/
int _putchar(char c);

int main(void)
{
	int i;
	char holberton[] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
