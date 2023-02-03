#include "main.h"
/**
* print_diagonal - draw a diagonal line on the terminal
*
*@n: # of times '\' should be printed
*
*Return: void
*/
void print_diagonal(int n)
{
	int v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 1; v < n; v++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
