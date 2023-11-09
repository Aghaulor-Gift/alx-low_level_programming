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
	va_list args;
	const char *string;
	char format_char;
	char *sep = "";

	va_start(args, format);

	while (format && *format)
	{
	format_char = *format;

	switch (format_char)
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
	printf("%s%s", sep, (string != NULL) ? string : "(nil)");
	break;
	default:
	format++;
	continue;
	}

	sep = ", ";
	format++;
	}

	printf("\n");
	va_end(args);
}
