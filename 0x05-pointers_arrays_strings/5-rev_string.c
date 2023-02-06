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
	char rvrs = s[0];
	int fwcount, chr;

	fwcount = 0;

	while (s[fwcount] != '\0')
	{
		fwcount++;
	}
	for (chr = 0; chr < fwcount; chr++)
	{
		fwcount--;
		rvrs = s[chr];
		s[chr] = s[fwcount];
		s[fwcount] = rvrs;
	}
}
