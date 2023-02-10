#include "holberton.h"
/**
* string_toupper- function changes all lowercase to upper
*
* @str: string
*
* Return: char string in uppercase
*/
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
	}
	return (str);
}
