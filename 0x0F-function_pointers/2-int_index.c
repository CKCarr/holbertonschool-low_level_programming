#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - functon that searches for an integer &
  * returns first eement for which cmp will compare
  *
  * @array: pointer to array of ints
  * @size: size of array of ints
  * @cmp: pointer to function that will be executed
  *
  *Return: int value or -1 if Null no matches or size<=0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
