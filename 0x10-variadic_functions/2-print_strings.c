#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings- function that prints strings.
 * @separator:string to be printed between the strings.
 * @n:  number of strings passed to the function.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	string = va_arg(args, const char *);
	if (string == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", string);
	}

	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}

	va_end(args);

	putchar('\n');
}

