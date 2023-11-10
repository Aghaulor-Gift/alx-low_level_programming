#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 if incorrect number of arguments,
 *         2 if negative bytes
 */
int main(int argc, char *argv[])
{
	int byt, i;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
	printf("Error\n");
	return (2);
	}

	for (i = 0; i < byt; i++)
	{
	printf("%02x", *((unsigned char *)main + i));

	if (i < byt - 1)
	printf(" ");
	else
	printf("\n");
	}

	return (0);
}
