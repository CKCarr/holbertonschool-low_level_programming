#include <stdio.h>
#include "main.h"
/**
* print_array -function that prints n elements of an array
* of integers
*
* @a: array given
* @n: number of integers given in array
*
* Return: void
*/
void print_array(int *a, int n)
{
	int chr;

	for (chr = 0; chr < n; chr++)
	{
		printf("%d, ", a[chr]);
	}
	if (chr != n - 1)
	{
		printf(", ");
	}
	_putchar('\n');
}
