#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to a string address
 * @c: character in the string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
	return (NULL);
	}
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	++s;
	}
	return (NULL);
}
