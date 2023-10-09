#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
