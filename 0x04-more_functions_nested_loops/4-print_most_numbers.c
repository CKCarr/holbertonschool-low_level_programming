#include "main.h"
/**
* print_most_numbers - print #'s 0-9 omit 2&4
*
*
*Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 && i == 4)
		{
			i++;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
