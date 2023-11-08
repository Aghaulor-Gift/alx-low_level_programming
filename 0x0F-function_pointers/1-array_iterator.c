#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator- Function given as a parameter on each element of an array
 * @array: The array to be processed
 * @size: The size of the array
 * @action: A pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
	size_t i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
