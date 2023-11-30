#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
