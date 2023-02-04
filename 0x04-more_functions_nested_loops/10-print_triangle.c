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
	for (r = 0; r <= (size - 1); r++)
	{
		for (s = 0; s <= (size - 1) - r; s++)
		{
			_putchar(' ');
			for (c = 0; c <= r; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
