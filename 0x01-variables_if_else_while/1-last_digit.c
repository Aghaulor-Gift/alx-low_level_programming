#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  print the last digit of the number stored in the variable n
 * Return: Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit;
	if (lastdigit > 5)
	{
	printf("%d lastdigit is greater than 5\n", n);
	}
	else if (lastdigit == 0)
	{
	printf("%d lastdigit is zero\n", n);
	}
	else if (lastdigit < 6 && != 0)
	{
	print("%d lastdigit is less than 6 and not 0\n", n);
	return (0);
}
