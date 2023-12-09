#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index where value is located.
 *         If the value is not present in array or if array is NULL, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid = 0, i = 0;

if (array == NULL)
	return (-1);

while (left <= right)
{
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
}

return (-1);
}
