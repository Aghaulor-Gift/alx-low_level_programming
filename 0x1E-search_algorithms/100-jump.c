#include "search_algos.h"
#include <math.h>

/**
 * jump_search- searches for a value in a sorted array of integers using
 *		the Jump search algorithm
 * @array: pointer to the first element of the array to search.
 * @size: the number of elements in array.
 * @value: The value to search for.
 *
 * Return: the first index where value is located and -1 if array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_step, prev_idx, current_idx;

	if (array == NULL)
		return (-1);
	jump_step = (int)sqrt(size);

	prev_idx = 0;
	current_idx = jump_step;

	
	while (current_idx < (int)size && array[current_idx] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current_idx, array[current_idx]);
		prev_idx = current_idx;
		current_idx += jump_step;
	}


	printf("Value checked array[%d] = [%d]\n", prev_idx, array[prev_idx]);
	while (prev_idx < (int)size && array[prev_idx] < value)
	{
		prev_idx++;
		printf("Value checked array[%d] = [%d]\n", prev_idx, array[prev_idx]);
	}

	if (array[prev_idx] == value)
		return prev_idx;

	return (-1);
}
