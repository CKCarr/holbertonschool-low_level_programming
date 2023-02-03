#include "main.h"
/**
* print_square - print a swuare followed by a new line
*
* @size: is the sixe of square #
*
* Return: void
*/
void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (r = 0; r <= size; r++)
	{
		for (c = 0; c <= r; c++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
