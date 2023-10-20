#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
	return (0);
}
