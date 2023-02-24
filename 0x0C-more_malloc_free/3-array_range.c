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
	int *int_arr, arr_i;
	int arr_size = max - min + 1;

	if (min > max)
	return (NULL);

	int_arr = malloc(sizeof(int) * arr_size);

	if (int_arr == NULL)
	return (NULL);

	for (arr_i = 0; arr_i <= arr_size; arr_i++)
	int_arr[arr_i] = min++;

	return (int_arr);
}
