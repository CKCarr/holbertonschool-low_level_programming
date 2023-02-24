#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* malloc_checked - function that allocates memory
* using malloc.
*
* @b: int to determine size.
*
* Return: pointer to allocated memory. upon failure
* terminate process with a status value of 98.
*
*/
void *malloc_checked(unsigned int b)
{
	void *memalloc;

	memalloc = malloc(b);
	if (memalloc == NULL)
	{
		exit(98);
	}
	return (memalloc);
}
