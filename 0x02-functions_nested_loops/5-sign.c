#include "main.h"
/**
 * main - prints the sign of a number
 * sign - prints the sign of a number
 * @n: the character to be checked
 * Return: 1 for positive num, -1  for negative num and 0 for otherwise
 */
int print_sign(int n)
{
	if (n > 1)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}

