#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The difference of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: The dividend
 * @b: The divisor
 * Return: The result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Finds the modulo of two integers
 * @a: The dividend
 * @b: The divisor
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
