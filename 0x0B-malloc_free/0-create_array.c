#include "main.h"
#include <stdlib.h>
/**
* create_array - create array & initialize char.
*
* @size: size of array.
* @c: char to assign.
*
* Return: pointer to array or NULL if fails.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	array = malloc(sizeof(char) * size);

	if (size == 0 && array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
