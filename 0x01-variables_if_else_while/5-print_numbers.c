#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d\n", n);
		n++;
	}
	return (0);
}
