#include "main.h"
/**
* print_triangle - function prints a triangle
*
* @size: size of the triangle '#'
*
* Return: void
*/
void print_triangle(int size)
{
	int r, c, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < size; r++)
		{
			for (s = size - r; s > 1; s--)
			{
				_putchar(32);
			}
			for (c = 0; c <= r; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
