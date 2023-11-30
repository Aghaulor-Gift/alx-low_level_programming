#include "main.h"
#include <stdio.h>

/**
 * leet-  function that encodes a string into 1337
 * @read_ptr: check value
 * @write_ptr: check value
 * @string:character to check
 * Return: string
 */
char *leet(char *string)
{
	char *read_ptr = string;
	char *write_ptr = string;

	if (string == NULL)
	{
	return (NULL);
	}
	while (*read_ptr != '\0')
	{
	if (*read_ptr == 'a' || *read_ptr == 'A')
	{
	*write_ptr = '4';
	}
	else if (*read_ptr == 'e' || *read_ptr == 'E')
	{
	*write_ptr = '3';
	}
	else if (*read_ptr == 'o' || *read_ptr == 'O')
	{
	*write_ptr = '0';
	}
	else if (*read_ptr == 't' || *read_ptr == 'T')
	{
	*write_ptr = '7';
	}
	else if (*read_ptr == 'l' || *read_ptr == 'L')
	{
	*write_ptr = '1';
	}
	else
	{
	*write_ptr = *read_ptr;
	}
	read_ptr++;
	write_ptr++;
	}
	*write_ptr = '\0';
	return (string);
}
