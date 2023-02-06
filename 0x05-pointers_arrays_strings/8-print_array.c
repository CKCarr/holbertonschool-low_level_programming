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
	int data;

	for (data = 0; data < n; data++)
	{
		printf("%d", a[n]);
	}
	if (data != (n - 1))
	{
		printf(", ");
	}
	_putchar('\n');
}
