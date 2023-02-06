#include "main.h"
/**
* puts2 - function that prints every other character
*of a string. starts with first chr, followed by \n
*
* @str: string to be sorted and printed
*
* Return: void
*/
void puts2(char *str)
{
	int chr;

	for (chr = 0; chr < _strlen(str); chr++)
	{
		if (chr % 2 == 0)
		{
			_putchar(str[chr]);
		}
	}
	_putchar('\n');
}
