#include "main.h"
#include <stdio.h>

/* Function prototype */
int check_prime(int n, int divisor);

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The integer to check.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);

	return (check_prime(n, 2));
}


/**
 * check_prime - Help function.
 * @divisor: The current divisor being checked.
 * @n: The number to check for
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{

	if (divisor <= n / 2)
	{
	if (n % divisor == 0)
	return (0);
	else
	return (check_prime(n, divisor + 1));
	}
	else
	{
	return (1);
	}
}
