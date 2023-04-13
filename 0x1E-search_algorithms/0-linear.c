#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array using linear search
  * @array: A pointer to the first element to search
  * @size: Number of elements in array
  * @value: Value to search for.
  * Description: Prints a value everytime it's compared in the array
  * Return: If value is not present or array is null, -1
  otherwise, first index where value is located
  */

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
        {
            return (i);
        }
        else
        {
            return (-1);
        }
    }
}

