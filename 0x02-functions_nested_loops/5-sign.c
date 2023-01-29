#include "main.h"
/**
* print_sign - prototype prints sign of a number
*
* @n: is char to be checked
*
* Return: 1 & + if >, 0 & 0 if 0, -1 & - if 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
