#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area.
 * @src: source
 * @dest: destination
 * @n: number
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL || src == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < n; ++i)
	{
	dest[i] = src[i];
	}
	return (dest);
}
