#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  function that reallocates a memory block
 *             using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 * Return: Pointer to the newly allocated memory block, or NULL on failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (NULL);

	if (new_size > old_size)
	new_size = old_size;

	for (i = 0; i < new_size; i++)
	((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
