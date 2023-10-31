#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int len1 = 0, len2 = 0;
	char *stringconcat = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";


	while (s1[len1])
	len1++;

	while (s2[len2])
	len2++;

	if (stringconcat == NULL)
	return (NULL);

	for (i = 0; (stringconcat[i] = s1[i]); i++)
	;

	for (i = 0; (stringconcat[len1 + i] = s2[i]); i++)
	;
	return (stringconcat);
}
