#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: string to search from
 * @needle:substring to search for
 * Return:0
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	return (NULL);
	while (*haystack != '\0')
	{
	char *startHaystack = haystack;
	char *currentNeedle = needle;

	while (*currentNeedle != '\0' && *startHaystack == *currentNeedle)
	{
	++startHaystack;
	++currentNeedle;
	}
	if (*currentNeedle == '\0')
	return (haystack);
	++haystack;
	}
	return (NULL);
}
