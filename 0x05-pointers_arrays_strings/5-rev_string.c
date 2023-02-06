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
	char rvrs[255];
	int str, chr;

	str = 0;
	chr = 0;

	while (s[chr] != '\0') /*count length of string*/
	{
		chr++;
	}
	for (; chr > 0; chr--) /*rev original string char and store in reverse*/
	{
		rvrs[str] = s[chr - 1];
		str++;
	}
	while (chr < str)/* replace orighinal string char with reverse string*/
	{
		s[chr] = rvrs[chr];
		chr++;
	}
}
