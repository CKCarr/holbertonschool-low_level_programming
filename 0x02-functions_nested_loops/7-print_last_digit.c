#include "main.h"
/**
*print_last_digit - entry point ,print last digit of a value
*@d: digit to be checked
*Return: value of last digit
*/

int print_last_digit(int d)
{
	if (d > 0)
	{
		_putchar(d % 10);
	}
	if (d < 0)
	{
		_putchar(((d * -1) % 10));
	}
	else
	{
		return (d);
	}
}
