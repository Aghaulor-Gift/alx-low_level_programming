#include "main.h"
#include <stdio.h>
/**
 * _strstr -  function that locates a substring.
 * @s: string to find
 * @accept: what to find
 * Return: value of the address 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *currentAccept = accept;

	if (s == NULL || accept == NULL)
	return (NULL);

	while (*s != '\0')
	{
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
