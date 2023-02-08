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
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);

	for (index = 0; index <= dest_len && src[index] != '\0'; index++)
	{
		dest[dest_len + index] = src[index];
	}
	dest[dest_len + src_len] = '\0';
return (dest);
}
