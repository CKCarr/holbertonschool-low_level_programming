#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array,
* using malloc
*
* @nmemb: number of elements
* @size: byte size of each element
*
* Return: pointer to allocated mem.
* otherwise NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size = nmemb * size;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = '\0';
	}
	return (ptr);
}
