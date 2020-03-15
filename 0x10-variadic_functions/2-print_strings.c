#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - prints strings
*Return: void
*@separator: string printed between the strings
*@n: number of strings passed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	const char *newsep;

	if (separator == NULL)
		newsep = "";
	else
		newsep = separator;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%s%s", va_arg(list, char*), newsep);
		}
		else
			printf("%s",va_arg(list, char*));
	}
	printf("\n");
	va_end(list);
}
