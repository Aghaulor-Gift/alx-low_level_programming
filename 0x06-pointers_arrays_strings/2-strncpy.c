#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy -  a function that copies a string.
 * @dest: destination value
 * @src: source value
 *  @n: number of integer
 *  Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (n > 0 && *src != '\0')
	{
	*dest++ = *src++;
	n--;
	}
	while (n > 0)
	{
	*dest++ = '\0';
	n--;
	}
	*dest = '\0';
	return (dest);
}
