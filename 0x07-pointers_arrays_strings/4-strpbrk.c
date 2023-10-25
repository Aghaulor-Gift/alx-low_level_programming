#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to find
 * @accept: what to find
 * Return: value of the address 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *currentAccept;

	if (s == NULL || accept == NULL)
	return (NULL);

	while (*s != '\0')
	{
	currentAccept = accept;
	while (*currentAccept != '\0')
	{
	if (*s == *currentAccept)
	return (s);
	++currentAccept;
	}
	++s;
	}
	return (NULL);
}
