#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @left: The left index of the search range.
 * @right: The right index of the search range.
 *
 * Return: The index where value is located, or -1
 *		if not found or if array is NULL.
 */
int binarySearch(int *array, size_t left, size_t right, int value)
{
	size_t index;
	int mid;

	if (array == NULL)
		return (-1);


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

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search- Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in. 
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: the first index where value is located, -1 if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, right;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);
	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binarySearch(array, i / 2, right, value));
}
