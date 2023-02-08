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
	int index;
	int destlen = _strlen(dest);
	int srclen = _strlen(src);

	for (index = 0; index <= destlen; index++)
	{
	for (index = 0; src[index] != '\0'; index++)
	{
		dest[destlen + index] = src[index];
	}
	}
	dest[destlen + srclen] = '\0';
return (dest);
}
