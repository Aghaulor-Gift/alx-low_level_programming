#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * min_coins -program that prints the minimum number of coins
 * @cents: The amount in cents.
 * Return: minimum coins.
 */
int min_coins(int cents)
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;

	if (cents <= 0)
	{
	return (0);
	}

	for (i = 0; i < 5; i++)
	{
	while (cents >= coins[i])
	{
	cents -= coins[i];
	num_coins++;
	}
	}
	return (num_coins);
}

/**
 * main - program that prints the minimum number of coins
 * @argc: argument count.
 * @argv: array arguments.
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int cents;
	
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	}
	else
	{
	printf("%d\n", min_coins(cents));
	}
	return (0);
}
