#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all- function that prints anything.
 * @format: prints character, integer, float and string
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sep = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
	while (format[i])
	{
	switch (format[i])
	{
	case 'c':
	printf("%s%c", sep, va_arg(args, int));
	break;
	case 'i':
	printf("%s%d", sep, va_arg(args, int));
	break;
	case 'f':
	printf("%s%f", sep, va_arg(args, double));
	break;
	case 's':
	string = va_arg(args, char *);
	if (!string)
	string = "(nil)";
	printf("%s%s", sep, string);
	break;
	default:
	i++;
	continue;
	}
	sep = ", ";
	i++;
	}
	}

	printf("\n");
	va_end(args);
}
