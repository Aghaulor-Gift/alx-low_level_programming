#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The amount of memory to allocate.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}

	return (ptr);
}
