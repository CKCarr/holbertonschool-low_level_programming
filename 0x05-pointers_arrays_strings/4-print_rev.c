#include "main.h"
/**
* print_rev - function that prints a string in reverse.
* followed by a new line.
*
* @s: character string set to be reversed.
*
* Return: void (void defaults to an int)
*
*/
void print_rev(char *s)
{
	int string, count = 0;

	for (string = 0; s[string] != '\0'; string++)
	{
		count++;
	}

	for (string = count - 1; string >= 0; string--)
	{
		_putchar(s[string]);
	}
	_putchar('\n');
}
