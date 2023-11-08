#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>



/**
 * print_opcodes - Print the opcodes of the main function.
 * @num_bytes: Number of opcodes to print.
 * Return: void
 */
void print_opcodes(int num_bytes)
{
	char *main_ptr = (char *)print_opcodes;
	int i;

	if (num_bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
	printf("%02x", main_ptr[i]);
	if (i < num_bytes - 1)
	printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 * Return: 0 on success, 1 on incorrect number of arguments,
 *         2 on negative number of bytes.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int num_bytes = atoi(argv[1]);

	print_opcodes(num_bytes);

	return (0);
}
