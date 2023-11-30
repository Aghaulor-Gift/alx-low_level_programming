#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 *           and initializes to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	return (NULL);

	memset(ptr, 0, total_size);
	return (ptr);
}

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b.
 * @s: Pointer.
 * @b: Constant byte to fill the memory with.
 * @n: bytes to fill.
 */
void _memset(void *s, int b, unsigned int n)
{
	unsigned char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	ptr[i] = b;
}
