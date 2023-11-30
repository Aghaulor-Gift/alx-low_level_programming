#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 *           space in memory, which contains a copy of the string parameter.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int length = 0;
	char *duplicate = malloc((length + 1) * sizeof(char));


	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	length++;

	if (duplicate == NULL)
	return (NULL);

	for (i = 0; i <= length; i++)
	duplicate[i] = str[i];

	return (duplicate);
}
