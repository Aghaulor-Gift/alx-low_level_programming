#include "search_algos.h"

/**
 * advanced_binary- Searches for a value in a sorted array of integers. .
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, and -1 if aaray == NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index, left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (index = left; index <= right; index++)
		{
			printf("%d", array[index]);
			if (index < right)
				printf(", ");
			else
				printf("\n");
		}

		if (value == array[mid])
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				right = mid - 1;
		}
		else if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
