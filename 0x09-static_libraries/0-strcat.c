#include "main.h"
#include <string.h>
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
	int destlen = strlen(dest);
	int srclen = strlen(src);

	for (index = 0; index <= srclen; index++)
	{
		dest[destlen + index] = src[index];
	}
	dest[destlen + srclen] = '\0';
return (dest);
}
