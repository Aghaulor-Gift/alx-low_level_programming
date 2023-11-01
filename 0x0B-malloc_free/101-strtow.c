#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 * Return: 1 if c is a space, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * **strtow - function that splits a string into words.
 * @str: string to be split
 * Return:  pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int i;
	int num_words;
	int in_word;

	if (str == NULL || *str == '\0')
	return (NULL);

	for (i = 0; str[i]; i++)
	{
	if (is_space(str[i]))
	in_word = 0;
	else if (!in_word)
	{
	in_word = 1;
	num_words++;
	}
	}
}
/**
 * **words - number of strings.
 * @str: string to be split
 * @num_words: number of words
 * Return:  pointer to an array of strings (words)
 */
char **words = malloc((num_words + 1) * sizeof(char *))
{
	int in_word;
	int i;
	int word_index;

	if (words == NULL)
	{
	perror("malloc");
	exit(EXIT_FAILURE);
	}

	word_index = 0;

	for (i = 0; str[i]; i++)
	{
	if (is_space(str[i]))
	{
	in_word = 0;
	}
	else if (!in_word)
	{
	in_word = 1;
	words[word_index++] = strdup(str + i);
	}
	}
	words[word_index] = NULL;
	return (words);
}

/**
 * **strtow - function that splits a string into words.
 * @str: string to be split
 * @words: number of character
 * Return:  pointer to an array of strings (words)
 */
int main(void)
{
	int i;
	char str[] = "  Hello  World  ";
	char **words = strtow(str);

	if (words != NULL)
	{
	for (i = 0; words[i] != NULL; i++)
	{
	printf("%s\n", words[i]);
	free(words[i]);
	}
	free(words);
	}
}
