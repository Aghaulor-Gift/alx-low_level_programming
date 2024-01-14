#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural
 * square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	int j;
	
	if (n < 0)
	return (-1);


	if (n == 0 || n == 1)
	return (n);
	}

	while (1) {
	j = (n) / 2;

	if (j * j == n)
	{
	return (j);
	}
	else if (j * j < n)
	{
	n = j + 1;
	}
	else
	{
	n = j - 1;
	}
	}
	return (-1);
}
