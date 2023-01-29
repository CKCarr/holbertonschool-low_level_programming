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

	if (ld < 0 || ld > 0)
	{
		_putchar(ld);
	}
	return (ld + '0');
}
