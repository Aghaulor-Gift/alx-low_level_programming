#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
#include <stddef.h>
/**
 * print_name- function that prints a name.
 * @name: Name of the person
 * @f: Function pointer that prints the persom's name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);

}

