#include "holberton.h"
/**
* _strcmp- function that compares 2 strings.
*
*@s1: string one
*@s2: string two
*
* Return: 0 if =, 1 if >, and -1 if <.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (((int)(unsigned char)(*s1)) - ((int)(unsigned char)(*s2)));
}
