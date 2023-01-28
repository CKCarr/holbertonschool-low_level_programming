#include "main.h"
/**
* print_alphabet_x10-
*
* Return: void
*/
void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	if (c <= 10)
	{
		_putchar('\n');
	}
}
