#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for an integer in an array
 * @array: The array to search for
 * @size: The number of elements in the array
 * @cmp: A pointer to the function used to compare values
 * Return: Index of the first element for which cmp does not return 0,
 *         or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
	int i;

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	}

	return (-1);
}
