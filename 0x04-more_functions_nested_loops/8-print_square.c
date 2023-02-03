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
		for (r = 1; r <= size; r++)
		{
			for (c = 2; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
