#include "main.h"
/**
* print_numbers - function that prints #'s 0-9 followed be newline
*
*@i: number to be checked
*
*Return: 0 is success
*
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
