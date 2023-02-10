#include "holberton.h"
/**
* reverse_array - function that reverses the array of int
*
* @a: array given to be reversed.
*
* @n: the number that is the maxlength of given array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int index;
	int rarr;

	for (index = 0; index < (n / 2); index++)
	{
		rarr = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = rarr;
	}
}
