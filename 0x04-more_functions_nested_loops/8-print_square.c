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
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (r = 2; r <= size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


