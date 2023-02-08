#include "holberton.h"
/**
* _strcat - function that concaternates two strings.
*
* @src: a string given to be copied from.
* @dest: a string given to be copied to.
*
* Return: pointer to resulting string.
*/
char *_strcat(char *dest, char *src)
{
	int size = _strlen(dest);/*max bytes to be used*/
	int index; /* one less than size, 0-based */
	int element; /* the members in the array */

	for (index = 0; dest[index] != '\0'; index++)
	{
	}

	for (element = 0; element < size; element++)
	{
		dest[index + element] = src[element];
		if (src[element] == '\0')
		{
			element = size;
		}
	}
	return (dest);
}
