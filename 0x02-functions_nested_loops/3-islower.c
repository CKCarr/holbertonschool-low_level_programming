#include "main.h"
/**
* _islower - prototype checks if lowercase
* @c: char to be checked
* Return: 0 if lower(true) 1 if false(upper)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
