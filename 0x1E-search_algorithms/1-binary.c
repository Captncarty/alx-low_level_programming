#include "search_algos.h"

/**
  * binary_search - Searches for a value using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If array is NULL, -1. Otherwise, the index where value is located.
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
