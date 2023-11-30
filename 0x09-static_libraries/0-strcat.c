#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat -  function that appends strings and  adds a terminating null byte.
 * @dest:the destination value.
 * @src:the source value.
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	dest++;
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (dest);
}
