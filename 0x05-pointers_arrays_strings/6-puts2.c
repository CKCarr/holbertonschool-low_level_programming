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
	int chr, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (chr = 0; chr < len; chr++)
	{
		if (chr % 2 == 0)
		{
			_putchar(str[chr]);
		}
	}
	_putchar('\n');
}
