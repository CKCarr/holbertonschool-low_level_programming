#include "main.h"
/**
* print_line - function that draws a straight line in the terminal
* @n: n is the # of times the char n is printed
*
* Return: n as _ or \n
*/
void print_line(int n)
{
	int v;

	for (v = 1; v <= n; v++)
	{
		if (n >= 1)
		{
			_putchar('_');
		}
		else
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
