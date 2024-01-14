#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
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
	unsigned char *arr;

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

	arr = (char *)main;

	for (i = 0; i < byt; i++)
	{
	if (i == byt - 1)
	{
	printf("%02hhx\n", arr[i]);
	break;
	}
	printf("%02hhx ", arr[i]);
	}

	return (0);
}
