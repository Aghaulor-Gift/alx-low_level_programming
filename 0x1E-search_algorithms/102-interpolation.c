#include "search_algos.h"

/**
 * interpolation_search- searches for a value in a sorted array of integers
 *			using the Interpolation search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: -1 if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;


	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos  = low + (((double)(high - low) / (array[high] - array[low])) * (
					value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[low] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
