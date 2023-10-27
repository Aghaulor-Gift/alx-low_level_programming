#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * is_digit - Check for a positive digit.
 * @str: The string to check.
 * Return: 1 if the string is a positive digit, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	{
	return (0);
	}
	str++;
}
	return (1);
}

/**
 * main - Adds positive numbers.
 * @argc: arguments count.
 * @argv: Argument array
 * is_digit: Check for a positive digit.
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	if (!is_digit(argv[i]))
	{
	printf("Error\n");
	return (1);
	}
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
