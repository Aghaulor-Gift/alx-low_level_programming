#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper -changes all lowercase letters of a string to uppercase.
 * @string: the character to return
 * Return:string
 */
char *string_toupper(char *string)
{
	int i = 0;
	const int ASCII_DIFFERENCE = 'a' - 'A';

	for (i = 0; string[i] != '\0'; i++)
	{
	if (string[i] >= 'a' && string[i] <= 'z')
	string[i] -= ASCII_DIFFERENCE;
	}
	return (string);
}
