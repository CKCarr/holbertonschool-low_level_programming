#include "main.h"
/**
* print_line - function that draws a straight line in the terminal
* @n: n is the # of times the char n is printed
*
* Return: void
*/
void print_line(int n)
{
	int v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 1; v <= n; v++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
