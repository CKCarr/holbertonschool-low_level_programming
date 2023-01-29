#include "main.h"
/**
* _isalpha - prototype checks if lower/upper/letter
* @c: char to be checked
* Return: 1 if true 0 if false
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

