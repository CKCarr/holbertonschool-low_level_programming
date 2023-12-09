#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the first occurrence.
 * If the value is not found or the array is NULL, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
