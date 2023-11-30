#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - function that concatenates two strings n bytes from src
 * @dest: destination value
 * @src: source value.
 * @n: number of strings to concatenate
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	if (src == NULL)
	{
	return (dest);
	}

	while (*dest != '\0')
	{
	dest++;
	}

	while (n > 0 && *src != '\0')
	{
	*dest++ = *src++;
	n--;
	}
	*dest = '\0';
	return (dest);
}
