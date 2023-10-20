#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string.
 * @string: character to check.
 * Return: string
 */
char *cap_string(char *string)
{
	char *current_word = string;
	int i = 0;

	if (string == NULL)
	{
	return (NULL);
	}
	
	for (i = 0; string[i] != '\0'; i++)
	{
	if (isspace(string[i]) || ispunct(string[i]))
	{
	string[i + 1] = toupper(string[i + 1]);
	current_word = &string[i + 1];
	}
	}
	*current_word = toupper(*current_word);
	return (string);
}
