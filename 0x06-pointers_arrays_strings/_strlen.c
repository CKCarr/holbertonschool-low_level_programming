#include "holberton.h"
#include <stdio.h>
/**
* _strlen- function that returns the length of a string.
*
* Return: int aka '#' of chars in given string
*
*/
int _strlen(char *s)
{
       	int strlen;

       	strlen = 0;
       	while (s[strlen] != '\0')
       	{
       	       	(strlen++);
       	}
       	return (strlen);
}
