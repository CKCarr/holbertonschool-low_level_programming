#include "main.h"
/**
*
* print_diagsums - function prints sum of 2 diagonals of a
*
* @a: matrix of integers
* @size: size of diagonals
*
* Return: sum of diagonals
*/
void print_diagsums(int *a, int size)
{
	int row, clmn, sum = 0;

	for (row = 0; row < size; row++)
	{
		for (clmn = 0; clmn < size; clmn++)
		{
