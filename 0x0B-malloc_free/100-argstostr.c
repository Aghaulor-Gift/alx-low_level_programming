#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int total_len;
	int index;
	char *result;

	strlen(av);

	if (ac == 0 || av == NULL)
	return (NULL);

	total_len = 0;

	for (i = 0; i < ac; i++)
	total_len += strlen(av[i]) + 1;

	*result = malloc(total_len + 1);

	if (result == NULL)
	return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{

	for (j = 0; av[i][j] != '\0'; j++)
	result[index++] = av[i][j];

	result[index++] = '\n';
	}

	result[index] = '\0';
	return (result);
}
