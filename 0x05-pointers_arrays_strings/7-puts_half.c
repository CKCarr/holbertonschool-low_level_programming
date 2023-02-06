#include "main.h"
/**
* puts_half - function that prints half of a string.
* prints second half of a string.
*
* @str: the given string to be printed.
*
* Return: void
*/
void puts_half(char *str)
{
	int n, chr, length;

	length = 0;
	for (chr = 0; str[chr] != '\0'; chr++)
	{
		length++;
	}
	n = length / 2;
	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}
	for (chr = n; str[chr] != '\0'; chr++)
	{
		_putchar(str[chr]);
	}
	_putchar('\n');
}
