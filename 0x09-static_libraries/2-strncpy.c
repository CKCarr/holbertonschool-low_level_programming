#include "main.h"
#include <string.h>
/**
* _strncpy - function that copies a string.
*
*@src: src string to be copied.
*@dest: string to be copied in this dest.
*@n: maxlength of string to be copied.
*
* Return: dest to be returned
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
