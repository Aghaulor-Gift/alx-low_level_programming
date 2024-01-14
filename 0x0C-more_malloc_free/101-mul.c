#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - Checks if a string consists of digits.
 * @str: The string to check.
 * Return: 1 if the string consists of digits, 0 otherwise.
 */

int is_digit(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers using the 'bc' command.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Description: Uses 'bc' command to perform the multiplication of
 * two positive numbers provided as strings. Prints the result.
 * If the input is invalid,
 * it prints an error message and exits with status 98.
 */

void multiply(char *num1, char *num2)
{
	char command[256];

	snprintf(command, sizeof(command), "echo '%s * %s' | bc", num1, num2);

	FILE *fp = popen(command, "r");

	if (fp == NULL)
	{
	perror("Error");
	exit(98);
	}

	char result[256];

	if (fgets(result, sizeof(result), fp) != NULL)
	{
	printf("%s", result);
	}

	pclose(fp);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
	{
	printf("Error\n");
	return (98);
}

	multiply(num1, num2);

	return (0);
}
