#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search for the first occurrence
 *                           of a value in a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @left: The left index of the search range.
 * @right: The right index of the search range.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if array is NULL.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, left, mid, value));
		}
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, right, value));
		else
			return (advanced_binary_recursive(array, left, mid - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for the first occurrence of a value in a
 *			sorted array using advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
