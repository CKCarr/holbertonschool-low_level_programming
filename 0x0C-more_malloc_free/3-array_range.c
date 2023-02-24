#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - function that creates an array of ints
*
* @min: first value of array
* @max: last value of array
*
* Return: pointer to new array,
* min > max = NULL, malloc fail = NULL
*
*/
int *array_range(int min, int max)
{
	int *int_arr, arr_i, arr_size = 0;

	if (min > max)
	return (NULL);

	arr_size = ((max + 1) - min);

	int_arr = malloc(sizeof(int) * size);

	if (int_arr == NULL)
	return (NULL);

	for (arr_i = 0; arr_i < size; arr_i++)
		int_arr[arr_i] = min + arr_i;

	return (int_arr);
}
