#include "main.h"
/**
* print_last_digit - entry point ,print last digit of a value
* @d: digit to be checked
* @ld: lastdigit of digit
* Return: value of last digit
*/

int print_last_digit(int d)
{
	int ld;

	ld = (d % 10);

	if (d < 0)
	{
		_putchar(ld + '0');
	}
	return (ld);
}
