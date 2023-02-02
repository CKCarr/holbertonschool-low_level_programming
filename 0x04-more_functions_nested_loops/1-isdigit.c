#include "main.h"
/**
* _isdigit - this function checks for a digit 0-9
*
*@c: this is the integer to be checked
*
*Return: 1 if digit 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
