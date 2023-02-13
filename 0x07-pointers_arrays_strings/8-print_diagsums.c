#include "main.h"
/**
* print_diagsums - function prints sum of 2 diagonals of a
*
* @a: matrix of integers
* @size: size of diagonals
*
* Return: sum of diagonals
*/
void print_diagsums(int *a, int size)
{
	int index, diagsum1 = 0, diagsum2 = 0;

	for (index = 0; index < size; index++)
	{
		diagsum1 += a[(size + 1) * index];
		diagsum2 += a[(size - 1) * (index + 1)];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
