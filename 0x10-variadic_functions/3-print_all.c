#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_all - prints anything
*Return: void
*@format: list of types of args passed to f'n
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char letter;
	int printed = 0;
	char *temp;

	va_start(list, format);
	if (format == NULL)
	{
		printf("(nil)");
		exit(0);
	}
	while (format[i] != 0)
	{
		letter = format[i];
		switch (letter)
		{
			case 's':
				temp = va_arg(list, char *);
				switch (temp == NULL)
				{
					case 1:
						printf("(nil)");
						break;
					default:
						printf("%s", temp);
				}
				printed = 1;
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				printed = 1;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				printed = 1;
				break;
			default:
				printed = 0;
		}
		if (format[i + 1] != 0 && printed == 1)
			printf(", ");
		i++;

	}
	printf("\n");
	va_end(list);
}
