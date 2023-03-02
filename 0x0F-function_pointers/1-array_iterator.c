#include "function_pointers.h"
/**
  * array_iterator - function tht executes a function
  * given as a parameter on each element of the array.
  *
  * @array: pointer to an array of ints
  * @size: size of int array given.
  * @action: pointer to function that will be executed.
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
