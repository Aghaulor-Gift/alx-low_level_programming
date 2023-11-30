#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s:pointer to a string
 * @to:dereferenced string
 * Return:0
 */
void set_string(char **s, char *to)
{
	if (s == NULL || to == NULL)
	{
	return;
	}
	*s = to;
}
