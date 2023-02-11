#include "holberton.h"
/**
* cap_string - function that capitalizes all words of a string.
*
* @s: string to be converted
* si - string index
* dar- delimiter array
* dc- delimiter count
*
* Return: char string
*/
char *cap_string(char *s)
{
	int i = 0, c;
	char d[] = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		for (c = 0; d[c]; c++)
		{
			if (s[i - 1] == d[c] && (s[i] >= 'a' && s[i] <= 'z'))
			{
			s[i] = s[i] - 32;
			}
		}
		i++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
	{
	s[0] = s[0] - 32;
	}
	return (s);
}
