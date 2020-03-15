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
	char *temp;

	if (separator == NULL)
		newsep = "";
	else
		newsep = separator;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(list, char*);
		if (i < n - 1)
		{
			printf("%s%s", (temp != NULL) ? temp : "(nil)", newsep);
		}
		else
			printf("%s", (temp != NULL) ? temp : "(nil)");
	}
	printf("\n");
	va_end(list);
}
