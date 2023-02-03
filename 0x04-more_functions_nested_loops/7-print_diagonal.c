#include "main.h"
/**
* print_diagonal - draw a diagonal line on the terminal
*
*@n: # of times '\' should be printed
*
* Return: void
*/
void print_diagonal(int n)
{
	int v, h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (v = 1; v < n; v++)
	{
		for (h = 1; h < v; h++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
