#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
*
*
*
*
*
*
*
*
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size = nmemb * size;
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	
	if (ptr != NULL)
		for (i = 0; i < total_size; i++)

