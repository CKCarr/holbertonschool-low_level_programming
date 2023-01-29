#include "main.h"
/**
* print_last_digit - print last digit of a value
* @d: digit to be checked
* Return: value of last digit
*/

int print_last_digit(int d)
{
	int ld = d % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');

	return (ld);
}
