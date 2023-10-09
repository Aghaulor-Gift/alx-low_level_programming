#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints single digit of base 10 starting from 0 with putchar
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
