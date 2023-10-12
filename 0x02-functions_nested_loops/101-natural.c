#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 10; i++)
	{
	if (i % 3 == 0 || 1 % 5 == 0)
	{
	sum = sum + i;
	}
	}
	printf("%d\n", sum);
}
