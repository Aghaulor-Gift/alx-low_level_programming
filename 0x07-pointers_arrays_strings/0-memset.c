#include "main.h"
#include <stdio.h>
/**
 * _memset -  function that fills memory with a constant byte.
 * @b: input
 * @n: input
 * @s: input
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < n; i++)
	{
	*(s + i) = b;
	}
	return (s);
}
