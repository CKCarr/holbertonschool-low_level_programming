#include "main.h"
/**
* _strlen- function that returns the length of a string.
*
* @s: the char for the length to be determined.
*
* Return: int aka '#' of chars in given string
*
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		(length++);
	}
	return (length);
}
