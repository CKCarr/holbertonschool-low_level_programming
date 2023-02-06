#include "main.h"
/**
* rev_string - write a function that reverses a string.
*
* @s: char string set to be reversed.
*
* Return: void (void defaults to int expectation)
*
*/
void rev_string(char *s)
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
