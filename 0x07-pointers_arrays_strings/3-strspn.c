#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: substring
 * @accept: acceptable substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	
	if (s == NULL || accept == NULL)
	{
	return (0);
	}
	while (*s != '\0' && s != NULL && accept != NULL)
	{
	++length;
	++s;
	}
	return (length);
}
