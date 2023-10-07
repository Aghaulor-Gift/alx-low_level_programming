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
	lastdigit = n % 20;
	if (lastdigit > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
	printf("last digit of %d is %d and lastdigit is zero\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
	print("last digit of %d is %d and less than 6 and not 0\n", n, lastdigit);
	return (0);
}
