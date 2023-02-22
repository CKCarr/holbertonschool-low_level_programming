#include "main.h"
/**
* _isupper -  a function that checks for uppercase char
*
*
*@c: the char to be checked
*
* Return: 1 for uppercase 0 for otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
