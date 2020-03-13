#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers - prints numbers followed by a new line
*Return: void
*@separator: string to be printed between numbers
*@n: numbers of integers passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%i%s", va_arg(valist, int),
			 (separator != NULL) ? separator : "");
	}
	printf("%i\n", va_arg(valist, int));
	va_end(valist);
}
