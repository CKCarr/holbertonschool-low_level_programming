#include "main.h"
#include <string.h>
/**
* _strncat - function that concaternates two strings
*
*@dest: string to be added to
*@src: string to be copied
*@n: most bytes used from src w/out '\0'
*
* Return: pointer to dest string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int index;

	for (index = 0; index <= n && src[index] != '\0'; index++)
	{
		dest[destlen + index] = src[index];
	}
	dest[destlen + n] = '\0';
	return (dest);
}
