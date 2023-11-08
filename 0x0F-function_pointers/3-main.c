#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number arguments
 * @argv: An array of argument strings
 * Return: 0 on success, 98 on incorrect number of arguments,
 *         99 on invalid operator, 100 on division/modulo by 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	result = op_func(a, b);

	printf("%d\n", result);

	return (0);
}
