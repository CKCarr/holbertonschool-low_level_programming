#include "main.h"
/**
* print_line - function that draws a straight line in the terminal
* @n: n is the # of times the char n is printed
*
*/
void print_line(int n)
{
	int v;

	if (n <= 0)
	{
		for (v = 0; v < n; v++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
